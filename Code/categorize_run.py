#!/usr/bin/env python3
import json
import os
import sys
from pathlib import Path
import shutil
import argparse


def load_config(path):
    # Returns a list of categories with {name, extensions}
    if not path:
        # default minimal config
        return [
            {"name": "Code", "extensions": [".py", ".js"]},
            {"name": "Docs", "extensions": [".md", ".txt"]},
            {"name": "Others", "extensions": []},
        ]
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
        cats = data.get("categories", [])
        norm = []
        for c in cats:
            name = c.get("name")
            exts = c.get("extensions", [])
            if not isinstance(exts, list):
                exts = []
            norm_exts = set()
            for e in exts:
                if not isinstance(e, str):
                    continue
                e = e.strip().lower()
                if not e.startswith("."):
                    e = "." + e
                norm_exts.add(e)
            norm.append({"name": name, "extensions": sorted(list(norm_exts))})
        return norm
    except Exception as e:
        print(f"Error reading config: {e}. Using empty default.", file=sys.stderr)
        return []


def ensure_dirs(root, categories):
    for c in categories:
        (root / c["name"]).mkdir(parents=True, exist_ok=True)


def categorize_paths(root, categories, dry_run=False):
    root = Path(root).resolve()
    ensure_dirs(root, categories)
    category_dirs = {root / c["name"] for c in categories}
    moves = 0
    planned = []

    def add_plan(src, dst):
        planned.append((str(src), str(dst)))

    for path in root.rglob("*"):
        if not path.is_file():
            continue
        # skip if already in a category dir
        if any(
            path.resolve().is_relative_to(d.resolve())
            for d in category_dirs
            if d.exists()
        ):
            continue
        ext = path.suffix.lower()
        cat = None
        for c in categories:
            if ext in c["extensions"]:
                cat = c["name"]
                break
        if not cat:
            cat = "Others"
        dest_dir = root / cat
        dest_path = get_available_path(dest_dir, path.name, root)
        add_plan(path, dest_path)
        if not dry_run:
            try:
                shutil.move(str(path), str(dest_path))
                moves += 1
            except Exception:
                pass
    return moves, planned


def get_available_path(dest_dir, fname, root):
    dest = dest_dir / fname
    if not dest.exists():
        return dest
    base, ext = os.path.splitext(fname)
    i = 1
    while True:
        new_name = f"{base}_{i}{ext}"
        candidate = dest_dir / new_name
        if not candidate.exists():
            return candidate
        i += 1


def format_report(moves, planned):
    lines = []
    lines.append(f"Planned moves: {len(planned)} items")
    count_by_dest = {}
    for src, dst in planned:
        count_by_dest[dst] = count_by_dest.get(dst, 0) + 1
    for dst, n in count_by_dest.items():
        lines.append(f"  -> {dst}: {n} file(s)")
    lines.append("")
    lines.append("Sample moves:")
    for i, (src, dst) in enumerate(planned[:10], start=1):
        lines.append(f"  {i}. {src} -> {dst}")
    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(
        description="Dry-run categorization preview using a JSON config."
    )
    parser.add_argument("root", help="Root directory to categorize")
    parser.add_argument(
        "--config", "-c", dest="config", help="Path to categorize_config.json"
    )
    parser.add_argument("--dry-run", action="store_true", help="Dry-run (preview only)")
    parser.add_argument(
        "--apply", action="store_true", help="Apply moves (non-dry-run)"
    )
    args = parser.parse_args()

    categories = load_config(args.config) if args.config else []
    if not categories:
        print("No categories configured. Aborting.")
        sys.exit(1)
    moves, planned = categorize_paths(
        args.root, categories, dry_run=not args.apply and args.dry_run
    )
    report = format_report(moves, planned)

    def safe_print(text):
        try:
            print(text)
        except UnicodeEncodeError:
            try:
                sys.stdout.buffer.write((str(text) + "\n").encode("utf-8", "replace"))
                sys.stdout.flush()
            except Exception:
                pass

    safe_print(report)
    # If not a dry-run and you want to re-run, you can call with --dry-run again
    if args.apply:
        print("Applied moves. Exiting.")
    else:
        print("Dry-run complete. Re-run with --apply to perform moves.")


if __name__ == "__main__":
    main()
