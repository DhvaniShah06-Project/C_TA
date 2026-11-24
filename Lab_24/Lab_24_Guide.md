
## 1. What is Dynamic Memory Allocation (DMA) and Why Use It?

Normally, arrays like `int a[100];` have a **fixed size** decided before the program runs (compile time). If you enter 5 numbers, 95 slots are wasted; if you enter 105 numbers, the program crashes.

**Dynamic Memory Allocation (DMA)** lets your program request exact memory on the **Heap** at **run time** (while the program is running) and release it when finished.

* **Header file required:** `#include <stdlib.h>`

## 2. Core DMA Functions & Operators

### `malloc()`
* **What it is:** Allocates a single block of raw bytes on the heap at run time.
* **Why we use it:** Lets you choose the memory size while the program runs instead of fixing it beforehand.
* **Number example:** Suppose `n = 3` and each integer takes `4` bytes, so `3 * 4 = 12` bytes are reserved in one block with garbage values inside.

### `calloc()`
* **What it is:** Allocates multiple blocks on the heap at run time and sets every byte to `0`.
* **Why we use it:** Useful when you want clean zero-filled memory from the start instead of leftover garbage values.
* **Number example:** Suppose `n = 3` and each integer takes `4` bytes, so `3` blocks of `4` bytes (`12` bytes total) are reserved and initialized to `0, 0, 0` before you overwrite them.

### `free()`
* **What it is:** Releases heap memory back to the operating system (`free(ptr);`).
* **Why we use it:** Always call this at the end so allocated memory is returned and there are no **memory leaks**.

### `sizeof()`
* **What it is:** Returns the exact byte size of a data type or structure (type `size_t`).
* **Why we use it:** Avoids guessing byte sizes so your program works across different machines.
* **Number example:** For `int`, `sizeof(int)` gives `4` bytes; for `char`, `sizeof(char)` gives `1` byte; for `struct employee` (`char name[100]` + `int salary`), `sizeof(struct employee)` gives `104` bytes.

### `NULL` Check
* **What it is:** Checking `if (ptr == NULL)` right after `malloc()` or `calloc()`.
* **Why we use it:** Confirms the operating system actually gave you memory so your program does not crash if memory is full.

## 3. Pointer & Format Specifier Quick Rules

* **`p[i]` vs `*(p + i)`:** Both access the `i`-th element in dynamically allocated memory.
* **`%p`:** Prints a memory address in hexadecimal (e.g., `0x55a1b2c0`).
* **`%zu`:** Format specifier used with `printf()` to print `sizeof(...)` results (`size_t`).
* **Struct Size Rule:** Always write `sizeof(struct employee)` (size of full structure), **not** `sizeof(struct employee*)` (size of just a pointer).

## 4. Lab 24 Programs Explained (Step-by-Step)

### `L24A1.c` — Allocate & Free `int`, `char`, and `float`

* **Goal:** Show how to dynamically create and destroy memory for different data types at run time.
* **How it works:**
  1. Reads `n` from the user.
  2. Uses `malloc()` three times (`ip`, `cp`, `fp`) with `sizeof(int)`, `sizeof(char)`, and `sizeof(float)`.
  3. Calls `free()` on all three pointers before `return 0;`.
* **Number Example (`n = 2`):**
  * `ip` reserves `2 * 4 = 8` bytes for 2 integers.
  * `cp` reserves `2 * 1 = 2` bytes for 2 characters.
  * `fp` reserves `2 * 4 = 8` bytes for 2 floats.
  * `free(ip); free(cp); free(fp);` returns all `18` bytes back to the system.

### `L24A2.c` — Sum of `n` Numbers Using `malloc()`

* **Goal:** Store `n` user-entered numbers in a dynamic array and calculate their sum.
* **How it works:**
  1. Allocates `n` integers using `malloc(n * sizeof(int))`.
  2. **Input Iteration (`for` loop `0` to `n-1`):** Reads numbers into `&p[i]`.
  3. **Sum Iteration (`for` loop `0` to `n-1`):** Adds `*(p + i)` into `sum`.
  4. Prints `sum` and calls `free(p)`.
* **Trace (`n = 3`, inputs `10, 20, 30`):**
  * `i = 0`: `sum = 0 + 10 = 10`
  * `i = 1`: `sum = 10 + 20 = 30`
  * `i = 2`: `sum = 30 + 30 = 60` -> Output: `Sum 60`

### `L24A3.c` — Sum of `n` Numbers Using `calloc()`

* **Goal:** Same sum program as `L24A2.c`, but using `calloc()` instead of `malloc()`.
* **Key Difference:** `calloc(n, sizeof(int))` takes **two arguments** (`count, size`) and sets all `n` elements to `0` automatically before user input is read.
* **Number Example (`n = 3`):** Reserves `3` blocks of `4` bytes initialized to `[0, 0, 0]`, then overwrites them with your `3` numbers and adds them up.

### `L24A4.c` — Dynamic Memory for a `struct`

* **Goal:** Allocate memory on the heap for a user-defined structure (`struct employee`).
* **How it works:**
  1. Defines `struct employee` with `char name[100]` (`100` bytes) and `int salary` (`4` bytes).
  2. Allocates memory using `malloc(sizeof(struct employee))` (`104` bytes).
  3. Prints the heap memory address (`%p`) and total byte size (`%zu` -> `104` bytes).
  4. Frees the structure memory using `free(p)`.

### `L24C.c` — Array Concatenation (`ans` of size `2n`)

* **Goal:** Given dynamic array `nums` of size `n`, return a new dynamic array `ans` of size `2n` containing `nums` repeated twice.
* **3 Standard Function Parts Used:**
  1. **Declaration:** `int* getConcatenation(int* nums, int numsSize);` (tells compiler about the function).
  2. **Call:** `int* result = getConcatenation(nums, n);` (sends array & size from `main`).
  3. **Execution:** Allocates `2 * numsSize * sizeof(int)` and fills both halves in **one loop**:

     ```c
     for (int i = 0; i < numsSize; i++) {
         ans[i] = nums[i];            // First half:  0 to n-1
         ans[i + numsSize] = nums[i]; // Second half: n to 2n-1
     }
     ```

* **Trace (`nums = [1, 2, 1]`, `n = 3`):**
  * `i = 0`: `ans[0] = 1`, `ans[3] = 1`
  * `i = 1`: `ans[1] = 2`, `ans[4] = 2`
  * `i = 2`: `ans[2] = 1`, `ans[5] = 1`
  * **Output:** `1 2 1 1 2 1`
  * Both `free(nums)` and `free(result)` are called at the end because two heap blocks (`12` bytes and `24` bytes) were allocated.