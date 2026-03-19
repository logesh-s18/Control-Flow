# CLAUDE.md — Control-Flow Repository

## Project Overview

This is a personal **C++ learning repository** documenting a student's progression through control flow concepts, following sections 8.2–8.10 of an educational C++ course (LearnCPP.com style). It is not a library or production codebase.

**Language**: C++20/C++23
**Build System**: Visual Studio 2022 (MSBuild, `.vcxproj`)
**Platform**: Windows (Console Application)

---

## Repository Structure

```
Control-Flow/
├── main.cpp                      # Main C++ source — current practice exercise
├── notes/
│   └── notes.md                  # Detailed learning notes (sections 8.2–8.10)
├── images/
│   └── cpp.jpg                   # Reference diagram
├── Control_Flow.vcxproj          # Visual Studio project file (C++20/23)
├── Control_Flow.slnx             # Visual Studio solution file
├── Control_Flow.vcxproj.filters  # IDE filter layout
├── .gitignore                    # Visual Studio standard gitignore
└── .gitattributes                # Line-ending normalization
```

---

## Source File: `main.cpp`

The current program is a **FizzBuzzPop** variant (extends classic FizzBuzz with "pop" for multiples of 7).

### Key Implementation Pattern

```cpp
void fizzbuzzpop(int value) {
    for (int i = 1; i <= value; ++i) {
        bool flag = false;

        if (i % 3 == 0) { cout << "fizz"; flag = true; }
        if (i % 5 == 0) { cout << "buzz"; flag = true; }
        if (i % 7 == 0) { cout << "pop";  flag = true; }

        if (!flag) { cout << i; }
        cout << '\n';
    }
}
```

**Design decisions to note**:
- Uses **independent `if` statements** (not `if-else` chains) so multiple labels can print on the same number (e.g., 15 prints "fizzbuzz")
- Uses a **boolean flag** to determine when to fall back to printing the number
- Loop variable `i` is scoped to the `for` statement

---

## Learning Notes: `notes/notes.md`

Covers C++ control flow topics in order:

| Section | Topic |
|---------|-------|
| 8.2 | If statements and blocks |
| 8.3 | Common if statement problems (dangling else, arrow code, guard clauses) |
| 8.4 | Constexpr if statements (compile-time branching) |
| 8.5 | Switch statement basics |
| 8.6 | Switch fallthrough (`[[fallthrough]]`) and scoping |
| 8.7 | Goto statements |
| 8.8 | While loops |
| 8.9 | Do-while loops |
| 8.10 | For loops (current section) |

Notes are written in a mix of English and Tamil (learner's native language). This is intentional — do not "correct" or remove Tamil text.

---

## Coding Conventions

These conventions are followed in this repository and should be maintained:

1. **Always use braces `{}`** — even for single-statement bodies
2. **Independent `if` statements** over `if-else` chains when multiple conditions can be simultaneously true
3. **Declare loop variables inside `for`** — keeps scope minimal
4. **Use `<=` / `>=` in loop conditions** rather than `!=` to prevent infinite-loop edge cases
5. **`bool` flag pattern** for conditional output aggregation
6. **`++i` (pre-increment)** preferred over `i++` in loop updates
7. Standard `#include <iostream>` and `using namespace std;` (acceptable for small learning programs)

---

## Build & Run

This project uses **Visual Studio 2022** on Windows.

### Build Configurations

| Config | Platform | C++ Standard | Optimizations |
|--------|----------|--------------|---------------|
| Debug  | Win32    | C++20        | Off           |
| Debug  | x64      | C++23        | Off           |
| Release| Win32    | C++20        | O2 + GL       |
| Release| x64      | C++20        | O2 + GL       |

### Running the Program

1. Open `Control_Flow.slnx` in Visual Studio 2022
2. Build with **Ctrl+Shift+B**
3. Run with **Ctrl+F5** (console stays open)
4. Enter an integer when prompted — outputs FizzBuzzPop sequence from 1 to that number

### Cross-platform note

The `.vcxproj` is Windows/MSVC only. For other platforms, compile manually:
```bash
g++ -std=c++20 -Wall main.cpp -o control_flow
./control_flow
```

---

## Git Workflow

### Commit Style

Commits follow a descriptive format referencing the section and question:
```
8.10 - For Loop - Question #4 - FIZZBUZZ game
8.10 - For Loops - Question 5 re writing
```

Use the same format when committing new practice exercises:
```
<section> - <topic> - <question or description>
```

### Branching

- `master` — stable learning snapshots
- `claude/*` — Claude AI documentation/improvement branches

---

## What AI Assistants Should Know

- **This is a learning repo** — the goal is clarity and understanding, not performance or brevity
- **Don't over-engineer**: keep solutions simple and focused on the concept being practiced
- **Preserve the learner's style**: personal notes, Tamil text, and explicit flag patterns are intentional
- **No test framework exists** — there are no unit tests; correctness is verified by running the program
- **`main.cpp` changes frequently** — it reflects whatever exercise is currently being practiced
- **Don't add unnecessary abstractions** — one function per exercise file is the norm
- **SDL checks are enabled** in MSVC — avoid unsafe C functions (`scanf`, `gets`, etc.) if suggesting code
