#!/usr/bin/env python3
import os
from pathlib import Path
import shutil
import sys


def get_available_path(dest_dir, fname):
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


def categorize(root_path):
    root = Path(root_path).resolve()
    if not root.exists():
        print(f"Root path does not exist: {root}", file=sys.stderr)
        return 1

    # Define categories and their extensions
    categories = [
        "Code",
        "Docs",
        "Images",
        "Audio",
        "Video",
        "Archives",
        "Binaries",
        "Configs",
        "Others",
    ]
    ext_map = {
        "Code": {
            ".py",
            ".js",
            ".ts",
            ".tsx",
            ".jsx",
            ".java",
            ".c",
            ".cpp",
            ".cs",
            ".go",
            ".rb",
            ".php",
            ".swift",
            ".kt",
            ".rs",
        },
        "Docs": {
            ".md",
            ".txt",
            ".pdf",
            ".doc",
            ".docx",
            ".ppt",
            ".pptx",
            ".xls",
            ".xlsx",
        },
        "Images": {".png", ".jpg", ".jpeg", ".gif", ".svg", ".bmp", ".tiff", ".webp"},
        "Audio": {".mp3", ".wav", ".flac", ".aac", ".m4a"},
        "Video": {".mp4", ".mkv", ".webm", ".avi", ".mov"},
        "Archives": {".zip", ".rar", ".7z", ".tar", ".gz", ".bz2"},
        "Binaries": {".exe", ".dll", ".so", ".dylib", ".class", ".jar", ".bin"},
        "Configs": {".json", ".yaml", ".yml", ".ini", ".cfg", ".env"},
        # Others is a catch-all; no explicit ext map entry here
    }

    # Ensure category directories exist
    for cat in categories:
        (root / cat).mkdir(parents=True, exist_ok=True)

    category_dirs = {root / cat for cat in categories}
    moves = 0
    moved = []

    def safe_print(msg):
        try:
            print(msg)
        except UnicodeEncodeError:
            print(msg.encode("utf-8", "backslashreplace").decode("utf-8", "ignore"))

    # Walk files recursively
    for path in root.rglob("*"):
        if not path.is_file():
            continue
        # Skip files already categorized (inside category dirs)
        try:
            if any(path.resolve().is_relative_to(d.resolve()) for d in category_dirs):
                continue
        except Exception:
            # Fallback for Python versions without is_relative_to
            skip_flag = False
            for d in category_dirs:
                try:
                    path.resolve().relative_to(d.resolve())
                    skip_flag = True
                    break
                except ValueError:
                    pass
            if skip_flag:
                continue

        ext = path.suffix.lower()
        cat = "Others"
        for c, exts in ext_map.items():
            if ext in exts:
                cat = c
                break
        dest_dir = root / cat
        dest_path = get_available_path(dest_dir, path.name)
        try:
            shutil.move(str(path), str(dest_path))
            moves += 1
            moved.append((str(path), str(dest_path)))
        except Exception as e:
            print(f"Failed to move {path}: {e}", file=sys.stderr)

    safe_print(f"Categorization complete. {moves} file(s) moved into categories.")
    for src, dst in moved:
        safe_print(f"Moved: {src} -> {dst}")
    return 0


if __name__ == "__main__":
    import argparse

    parser = argparse.ArgumentParser(
        description="Categorize files under a root directory by extension into category folders."
    )
    parser.add_argument(
        "root",
        nargs="?",
        default=".",
        help="Root directory to categorize (default: current directory)",
    )
    args = parser.parse_args()
    sys.exit(categorize(args.root))
