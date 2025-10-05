# Dynamic Memory Allocation in C

This repository contains my solutions for Homework 5, focusing on **dynamic memory allocation techniques** in the C programming language. The assignment explores the use of `malloc()`, `calloc()`, `realloc()`, and `free()`, as well as custom implementations for advanced memory management. Each task demonstrates a specific concept related to memory handling, including resizing, initialization, and cleanup.

---

## Author

* **Name:** Gevorg Gevorgyan
* **Date:** October 05, 2025

---

## Project Structure

```
dynamic_memory_allocation_in_the_C_programming_language/
│
├── src/                   # Source code files
│   ├── task1.c            # Task 1: Dynamic Integer Array
│   ├── task2.c            # Task 2: Initialized Array with Average
│   ├── task3.c            # Task 3: Resizing Array with realloc
│   ├── task4.c            # Task 4: Dynamic String Array
│   ├── task5.c            # Task 5: Student Grades
│   ├── task6.c            # (Optional) Task 6: Custom realloc
│   ├── task7.c            # (Optional) Task 7: Aligned Memory
│
├── output screenshots/    # Screenshots and output logs
│   ├── task1_output.png   # Screenshot for Task 1
│   ├── task2_output.png   # Screenshot for Task 2
│   ├── task3_output.png   # Screenshot for Task 3
│   ├── task4_output.png   # Screenshot for Task 4
│   ├── task5_output.png   # Screenshot for Task 5
│   ├── task6_output.png   # (Optional) Screenshot for Task 6
│   ├── task7_output.png   # (Optional) Screenshot for Task 7
│
├── README.md              # Project overview and instructions
```

---

## Repository Link

[GitHub Repository](https://github.com/RealGevorgian/dynamic_memory_allocation_in_the_C_programming_language.git)

---

## Tasks Overview

### Task 1: Dynamic Integer Array with Sum Calculation

Demonstrates how to allocate memory dynamically for an integer array, input numbers, compute their sum, and release the memory using `free()`.

**Example Output:**

```
How many elements should we include? (array size) -> 5
Enter 5 integers (Please don't forget to press the 'space' button after each integer) -> 1 2 3 4 5
Sum of the array -> 15
```

### Task 2: Using calloc() for Initialized Array with Average Calculation

Uses `calloc()` to allocate zero-initialized memory for integers, inputs values, updates the array, and calculates the average.

**Example Output:**

```
Please insert the number of elements -> 4
Changed array after calloc -> 0 0 0 0
Enter 4 integers (Please don't forget to press the 'space' button after each integer) -> 5 10 15 20
Updated array -> 5 10 15 20
The average of the array -> 12.5
```

### Task 3: Resizing an Array Using realloc()

Illustrates memory resizing by shrinking an array of 10 integers to 5 using `realloc()`.

**Example Output:**

```
Please insert 10 integers (Please don't forget to press the 'space' button after each integer) -> 1 2 3 4 5 6 7 8 9 10
Resulting array after resizing -> 1 2 3 4 5
```

### Task 4: Dynamic String Array with realloc()

Allocates memory for 3 strings, then expands it to 5 using `realloc()`. Shows dynamic resizing and safe memory extension for string data.

**Example Output:**

```
Please input 3 strings -> Hello World C
All strings -> Hello World C
Please input 2 more strings -> Programming Memory
All strings -> Hello World C Programming Memory
```

### Task 5: Dynamic Memory for Student Grades

Allocates memory dynamically for student grades, inputs them, and determines the highest and lowest grade.

**Example Output:**

```
Please insert the number of students -> 5
Input the grades (Please press the 'space' button after each grade) -> 90 85 70 60 95
Highest grade -> 95
Lowest grade -> 60
```

### Task 6 (Optional): Custom realloc() Implementation

Implements a custom `my_realloc()` function using `malloc()`, `memcpy()`, and `free()` to mimic the behavior of standard `realloc()`.

**Example Output:**

```
Input 5 integers (Please press the 'space' button after each integer) -> 1 2 3 4 5
Array after resizing -> 1 2 3
```

### Task 7 (Optional): Aligned Memory Allocation

Implements custom `aligned_malloc()` and `aligned_free()` functions to allocate memory aligned to a specific byte boundary.

**Example Output:**

```
Aligned address will be -> 0x7ffd8b0...
Alignment check passed!
```

---

## How to Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/RealGevorgian/dynamic_memory_allocation_in_the_C_programming_language.git
   cd dynamic_memory_allocation_in_the_C_programming_language
   ```

2. Compile each program:

   ```bash
   gcc -o task1 src/task1.c
   gcc -o task2 src/task2.c
   gcc -o task3 src/task3.c
   gcc -o task4 src/task4.c
   gcc -o task5 src/task5.c
   gcc -o task6 src/task6.c
   gcc -o task7 src/task7.c
   ```

3. Run the tasks:

   ```bash
   ./task1
   ./task2
   ./task3
   ./task4
   ./task5
   ./task6
   ./task7
   ```

4. To review results, check the **output screenshots/** folder.

---

## Notes

All dynamically allocated memory is properly freed to prevent leaks. Each program has been tested in a Linux environment using GCC. Optional tasks (6 and 7) were implemented to go beyond the mandatory requirements.

---

## Appendix

Screenshots from the **output screenshots/** directory are included to demonstrate successful program execution.

