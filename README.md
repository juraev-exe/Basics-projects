# Basics Projects — C++ Solutions Collection

This repository is a curated collection of C++ solutions for programming problems (Codeforces, LeetCode, and other practice tasks). It is organized to make it easy to find, build, and run individual problem solutions for learning and interview preparation.

Key points:
- Primary language: C++ (standalone `.cpp` solution files)
- Main source folders: `Code/` (practice problems), `leetcode/` (LeetCode solutions)

## Goals

- Collect and document solved problems for future reference
- Provide reproducible build/run instructions for each solution
- Improve repository hygiene (ignore build artifacts, add CI and tests when appropriate)

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


## Profiles & Competitive Accounts

You can find my practice and contest profiles here:

- Codingame: https://www.codingame.com/profile/508f92a578c56116163a564681cff9c08816333
- CodeCombat: https://codecombat.com/user/juraevexe
- CodeCrafters: https://app.codecrafters.io/users/juraev-exe
- ACMP: https://acmp.ru/index.asp?main=user&id=514230
- LeetCode: https://leetcode.com/u/abubAkrJuraev2004/
- Codeforces: https://codeforces.com/profile/AbubakrJ
<<<<<<< HEAD

=======
>>>>>>> 7ed14abb3ab9539cc5c1a98820e1bd53662e2383
## Recommended repository improvements (short-term)

1. Add a `.gitignore` to exclude build artifacts and editor files (e.g., `*.exe`, `*.o`, `/build/`, `.vscode/`).
2. Remove tracked binaries from Git and commit the `.gitignore` (use `git rm --cached` for existing executables).
3. Add a simple `Makefile` or `CMakeLists.txt` to automate compiling individual files or running a small test harness.
4. Add a `LICENSE.md` if you want to adopt an open-source license (MIT suggested).


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


## Contribution guidelines

- If you add solutions, keep each file focused on one problem and name files clearly (problemname.cpp or contest_problem.cpp).
- Add a short comment header in each solution with: problem name/source, brief approach, and compile instructions if non-standard.

## Where to find things

- See `Code/` for most practice solutions.
- See `leetcode/` for LeetCode examples.


## Profiles & Competitive Accounts

You can find my practice and contest profiles here:

- Codingame: https://www.codingame.com/profile/508f92a578c56116163a564681cff9c08816333
- CodeCombat: https://codecombat.com/user/juraevexe
- CodeCrafters: https://app.codecrafters.io/users/juraev-exe
- ACMP: https://acmp.ru/index.asp?main=user&id=514230
- LeetCode: https://leetcode.com/u/abubAkrJuraev2004/
- Codeforces: https://codeforces.com/profile/AbubakrJ
<<<<<<< HEAD


I changed it in my github; this file now matches your provided content.
=======
>>>>>>> 7ed14abb3ab9539cc5c1a98820e1bd53662e2383
