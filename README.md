# Sequence Quiz (C++)

**Project overview**

A small, friendly C++ console program that asks the user to find the missing number in three number sequences. The program checks the answers, awards points (out of 3), and displays the correct answers for any questions answered incorrectly.

---

## Requirements

* A C++ compiler (for example `g++`) or an IDE that supports C++ (Visual Studio Code, Visual Studio, CLion, etc.).
* Works on Windows, macOS, and Linux.

---

## Build & Run

1. Save the source code as `main.cpp` inside the project folder.
2. Open a terminal in the project folder and compile with `g++`:

```bash
g++ -o sequence_quiz main.cpp
```

3. Run the program:

```bash
# macOS / Linux
./sequence_quiz

# Windows
sequence_quiz.exe
```

---

## How to play

* The program displays three sequences, each ending with `??`.
* Type the number you think completes the sequence and press Enter.
* After answering all three, the program prints your score (out of 3) and shows the correct answers for any question you missed.

---

## Sequences used (as in the code)

* Q1: `1 | 5 | 10 | 16 | ??`  → Correct: `23`
* Q2: `2 | 4 | 8 | 16 | ??`  → Correct: `32`
* Q3: `1 | 1 | 2 | 3 | ??`  → Correct: `5`

(These values are stored in the `seq` array inside `main.cpp`.)

---

## Suggested project structure

```
sequence-quiz/
├─ main.cpp
├─ README.md
└─ (optional build files)
```

---

## Example run

```
====================================
Type The Missing Number In Sequences
====================================
Q1:
1 | 5 | 10 | 16 | ??
=> 23
=====================
Q2:
2 | 4 | 8 | 16 | ??
=> 31
=====================
Q3:
1 | 1 | 2 | 3 | ??
=> 5
===========================
[2] The correct answer : 32
Your Points : 2 / 3
```

---

## Improvements & ideas

* Make the sequences and answers configurable (load from a file or generate dynamically).
* Add input validation (reject non-numeric input, warn on out-of-range values).
* Add difficulty levels, time limits, or multiple rounds.
* Convert to a GUI app or a web version for a nicer user experience.

---

## License

Free to use and modify. Credit is appreciated but not required.

---

If you want, I can also:

* produce a polished `main.cpp` version with input validation and friendlier messages,
* create a GitHub-friendly repository layout,
* or generate a downloadable `README.md` file for you.

Tell me which one you want and I’ll add it.
