# Introduction to C

A hands-on collection of C programs for learning core programming concepts step by step.

This repository is organized as many small, standalone `.c` files. Each file focuses on one idea (for example recursion, sorting, linked lists, pattern printing, or matrix operations), making it easy to pick a topic and practice.

## Repository Structure

Current layout of `/Git/Introduction-to-C`:

- Root: (all programs organized into subdirectories)
- `array_operations/`: 10 programs
- `Calculations/`: 13 programs
- `control-flow/`: 7 programs
- `DateTime/`: 2 programs
- `Functions/`: 1 program
- `Game/`: 1 program
- `linked-list/`: 3 programs
- `Logic/`: 6 programs
- `Math/`: 18 programs
- `matrix-operations/`: 11 programs
- `pattern-printing/`: 28 programs
- `Pointers/`: 3 programs
- `Queue/`: 6 programs
- `Recursion/`: 10 programs
- `Searching/`: 4 programs
- `Sorting/`: 8 programs
- `Stack/`: 6 programs
- `String/`: 3 programs
- `Structures/`: 1 program
- `Utilities/`: 3 programs

**Total: 142 programs**

## Topics Covered

- Basic I/O and operators
- Conditional logic and loops (control-flow, Logic)
- Number-based programs (prime, palindrome, Armstrong, digit operations in Math, Calculations)
- Functions and recursion (factorial, fibonacci, exponent, combinatorics in Math, Recursion)
- Arrays (insert/delete/reverse/rotate, duplicates, pair-sum in array_operations)
- Sorting and searching algorithms (Sorting, Searching)
- Matrix operations (transpose, rotation, wave print, product in matrix-operations)
- Pointers and pointer-based calculator examples (Pointers)
- Linked list, stack, and queue implementations (linked-list, Stack, Queue)
- Pattern printing (stars, numbers, alphabets, Pascal triangle, diamond variants in pattern-printing)
- String operations (String)
- Structures (Structures)
- DateTime operations (DateTime)
- Game implementations (Game)
- Utility programs (Utilities, Calculations)

## Example Programs

- Math and logic: `Math/prime_checker.c`, `Math/number_palindrome.c`, `Math/armstrong_number.c`
- Recursion: `Math/factorial_recursive.c`, `Recursion/fibonnacci_recursive.c`, `Recursion/exponent_recursive.c`
- Utilities: `Calculations/cmd_line_utility_calc.c`, `Pointers/pointer_calculator.c`, `Utilities/bill_generator_from_template.c`
- Data structures: `linked-list/linked_list_operations.c`, `Stack/stack_using_array.c`, `Queue/queue_using_linked_list.c`
- Algorithms: `Sorting/bubble_sort.c`, `Searching/binary_search_iterative.c`, `matrix-operations/matrix_clockwise_rotation.c`

## Getting Started

### Prerequisites

Install a C compiler:

- GCC (MinGW on Windows)

Check compiler installation:

```bash
gcc --version
```

### Compile and Run

From `/Git/Introduction-to-C`, compile any file:

```bash
gcc Sorting/bubble_sort.c -o bubble_sort
./bubble_sort
```

On Windows Command Prompt, run executable as:

```bat
bubble_sort.exe
```

## Learning Flow (Suggested)

1. Start with basics (`control-flow/even_odd_loop.c`, `Logic/grading.c`, `Calculations/simple_interest.c`).
2. Move to functions and recursion (`Math/factorial_recursive.c`, `Calculations/sum_of_natural_recursive.c`).
3. Practice arrays and algorithms (`array_operations/`, `Sorting/`, `Searching/`).
4. Continue with 2D arrays and matrix programs (`matrix-operations/`).
5. Finish with data structures (`linked-list/`, `Stack/`, `Queue/`).

## Notes

- Programs are intentionally independent, so variable names and coding style may vary file to file.
- Some filenames might include typos but still serve as learning examples.
- This repository is best used as a practice bank: pick one file, understand it, modify it, and rerun.
