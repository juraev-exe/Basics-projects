# Basics Projects — C++ Solutions Collection

This repository is a curated collection of C++ solutions for programming problems (Codeforces, LeetCode, and other practice tasks). It is organized to make it easy to find, build, and run individual problem solutions for learning and interview preparation.

Key points:
- Primary language: C++ (standalone `.cpp` solution files)
- Main source folders: `Code/` (practice problems), `leetcode/` (LeetCode solutions)

## Goals

- Collect and document solved problems for future reference
- Provide reproducible build/run instructions for each solution
- Improve repository hygiene (ignore build artifacts, add CI and tests when appropriate)

## Repository Layout

- `Code/` — main set of problem solutions (many single-file `.cpp` programs)
- `leetcode/` — solutions for LeetCode problems
- `acmp/` — reserved for ACMP problems (currently empty)
- `.vscode/` — editor configuration and tasks

## Quickstart — build & run

Requirements:
- A C++ compiler (GCC/g++, Clang, or MSVC)
- Recommended: a modern C++ toolchain (GCC >= 9, Clang >= 10)

Compile and run a single solution (Linux / macOS):

```bash
cd Code
g++ -std=c++17 -O2 -pipe Example.cpp -o Example
./Example
```

On Windows (MinGW):

```powershell
cd Code
g++ -std=c++17 -O2 -pipe Example.cpp -o Example.exe
.\Example.exe
```

Tips:
- Replace `Example.cpp` with the filename you want to compile.
- If a solution requires additional files or libraries, check the top of the `.cpp` for comments explaining flags or inputs.

## Recommended repository improvements (short-term)

1. Add a `.gitignore` to exclude build artifacts and editor files (e.g., `*.exe`, `*.o`, `/build/`, `.vscode/`).
2. Remove tracked binaries from Git and commit the `.gitignore` (use `git rm --cached` for existing executables).
3. Add a simple `Makefile` or `CMakeLists.txt` to automate compiling individual files or running a small test harness.
4. Add a `LICENSE.md` if you want to adopt an open-source license (MIT suggested).

Example `.gitignore` snippet:

```
# Build artifacts
*.exe
*.out
*.o
build/

# VS Code
.vscode/

# OS files
Thumbs.db
.DS_Store
```

## Suggested next steps (medium-term)

- Add a lightweight test harness using GoogleTest or Catch2 and include one or two sample tests (useful for verifying helper functions).
- Add a CI workflow (GitHub Actions) that builds changed `.cpp` files and runs tests.
- Normalize coding style (optional): add a `clang-format` config and run it on the repository.

## Contribution guidelines

- If you add solutions, keep each file focused on one problem and name files clearly (problemname.cpp or contest_problem.cpp).
- Add a short comment header in each solution with: problem name/source, brief approach, and compile instructions if non-standard.

## Where to find things

- See `Code/` for most practice solutions.
- See `leetcode/` for LeetCode examples.

## Contact / Questions

Open an issue or submit a pull request with suggested improvements or organization changes.

---
Generated with guidance from repository analysis and project-skills; I can also add a `Makefile`, `.gitignore`, or CI workflow next — tell me which one to scaffold first.

## Profiles & Competitive Accounts

You can find my practice and contest profiles here:

- Codingame: https://www.codingame.com/profile/508f92a578c56116163a564681cff9c08816333
- CodeCombat: https://codecombat.com/user/juraevexe
- CodeCrafters: https://app.codecrafters.io/users/juraev-exe
- ACMP: https://acmp.ru/index.asp?main=user&id=514230
- LeetCode: https://leetcode.com/u/abubAkrJuraev2004/
- Codeforces: https://codeforces.com/profile/AbubakrJ