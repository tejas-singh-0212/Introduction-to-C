# Introduction to C

A hands-on collection of C programs for learning core programming concepts step by step.

This repository is organized as many small, standalone `.c` files. Each file focuses on one idea (for example recursion, sorting, linked lists, pattern printing, or matrix operations), making it easy to pick a topic and practice.

## Repository Structure

Current layout of `/Git/Introduction-to-C`:

- Root: 71 programs (fundamentals, math, recursion, pointers, utility programs)
- `array_operations/`: 10 programs
- `pattern-printing/`: 27 programs
- `Sorting/`: 3 programs
- `Searching/`: 4 programs
- `matrix-operations/`: 10 programs
- `linked-list/`: 3 programs
- `Stack/`: 3 programs
- `Queue/`: 2 programs

## Topics Covered

- Basic I/O and operators
- Conditional logic and loops
- Number-based programs (prime, palindrome, Armstrong, digit operations)
- Functions and recursion (factorial, fibonacci, exponent, combinatorics)
- Arrays (insert/delete/reverse/rotate, duplicates, pair-sum)
- Sorting and searching algorithms
- Matrix operations (transpose, rotation, wave print, product)
- Pointers and pointer-based calculator examples
- Linked list, stack, and queue implementations
- Pattern printing (stars, numbers, alphabets, Pascal triangle, diamond variants)

## Example Programs

- Math and logic: `GCD.c`, `LCM.c`, `prime_checker.c`, `number_palindrome.c`
- Recursion: `factorial_recursive.c`, `fibonnacci_recursive.c`, `exponent_recursive.c`
- Utilities: `cmd_line_utility_calc.c`, `pointer_calculator.c`, `bill_generator_from_template.c`
- Data structures: `linked-list/linked_list_operations.c`, `Stack/stack_using_array.c`, `Queue/queue_using_linked_list.c`
- Algorithms: `Sorting/bubble_sort.c`, `Searching/binary_search_iterative.c`, `matrix-operations/matrix_clockwise_rotation.c`

## Getting Started

### Prerequisites

Install a C compiler:

- GCC (MinGW on Windows)
- or Clang

Check compiler installation:

```bash
gcc --version
```

### Compile and Run

From `/Git/Introduction-to-C`, compile any file:

```bash
gcc prime_checker.c -o prime_checker
./prime_checker
```

For files inside subfolders:

```bash
gcc Sorting/bubble_sort.c -o bubble_sort
./bubble_sort
```

On Windows Command Prompt, run executable as:

```bat
bubble_sort.exe
```

## Learning Flow (Suggested)

1. Start with root-level basics (`even_odd_loop.c`, `grading.c`, `simple_interest.c`).
2. Move to functions and recursion (`factorial_recursive.c`, `sum_of_natural_recursive.c`).
3. Practice arrays and algorithms (`array_operations/`, `Sorting/`, `Searching/`).
4. Continue with 2D arrays and matrix programs (`matrix-operations/`).
5. Finish with data structures (`linked-list/`, `Stack/`, `Queue/`).

## Notes

- Programs are intentionally independent, so variable names and coding style may vary file to file.
- Some filenames might include typos but still serve as learning examples.
- This repository is best used as a practice bank: pick one file, understand it, modify it, and rerun.