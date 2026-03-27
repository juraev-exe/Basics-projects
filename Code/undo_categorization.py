#!/usr/bin/env python3
import os
from pathlib import Path
import shutil
import sys


def restore_from_categories(root_path: str, dry_run: bool = False) -> int:
    root = Path(root_path).resolve()
    if not root.exists():
        print(f"Root path does not exist: {root}", file=sys.stderr)
        return 1

    # Determine category folders (exclude root itself)
    categories = [p.name for p in root.iterdir() if p.is_dir()]
    moves = 0
    moved = []

    def log(msg):
        try:
            print(msg)
        except UnicodeEncodeError:
            # Fall back to binary write to avoid stdout encoding issues on Windows
            try:
                sys.stdout.buffer.write((str(msg) + "\n").encode("utf-8", "replace"))
                sys.stdout.flush()
            except Exception:
                # last resort
                pass

    # Iterate over category folders
    for cat in categories:
        cat_dir = root / cat
        if not cat_dir.is_dir():
            continue
        for path in cat_dir.iterdir():
            if not path.is_file():
                continue
            dest = root / path.name
            if dest.exists():
                base, ext = os.path.splitext(path.name)
                i = 1
                while True:
                    candidate = root / f"{base}_{i}{ext}"
                    if not candidate.exists():
                        dest = candidate
                        break
                    i += 1
            if dry_run:
                log(f"[DRY-RUN] {path} -> {dest}")
            else:
                try:
                    shutil.move(str(path), str(dest))
                    moves += 1
                    moved.append((str(path), str(dest)))
                except Exception as e:
                    log(f"Failed to move {path}: {e}")
        # After moving, attempt to remove empty category dir
        if not any(cat_dir.iterdir()):
            if not dry_run:
                try:
                    cat_dir.rmdir()
                except Exception:
                    pass

    log("")
    if dry_run:
        log(f"Dry-run: would undo moves from {len(moved)} file(s).")
    else:
        log(f"Undo complete. {moves} file(s) restored to root.")
    for src, dst in moved:
        log(f"Moved back: {src} -> {dst}")
    return 0


def main():
    import argparse

    parser = argparse.ArgumentParser(
        description="Undo categorization by moving files from category folders back to root."
    )
    parser.add_argument(
        "root",
        nargs="?",
        default=".",
        help="Root directory containing category folders (default: current directory)",
    )
    parser.add_argument(
        "--dry-run", action="store_true", help="Preview moves without performing them"
    )
    args = parser.parse_args()
    sys.exit(restore_from_categories(args.root, args.dry_run))


if __name__ == "__main__":
    main()
