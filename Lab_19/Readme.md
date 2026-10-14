# C Programming: Functions, Recursion, and String Operations Guide

 This guide breaks down complex C programming concepts—such as recursion, array passing, string handling, and custom header files—into simple, easy-to-understand explanations complete with step-by-step traces.

---

## 1. Recursion

### What is Recursion?
Recursion is a programming technique where a function calls itself to solve a smaller sub-problem of the original problem. A recursive function always needs two things:
1. **Base Case:** A stopping condition that prevents the function from calling itself infinitely.
2. **Recursive Step:** The part where the function calls itself with a modified, smaller input moving toward the base case.

### Where is it Used?
* Solving problems that can be naturally broken down into identical smaller problems (e.g., mathematical computations like factorials and powers).
* Data structures like trees and graphs (tree traversals).
* Divide-and-conquer algorithms (like Merge Sort and Quick Sort).

---

### Tracing Recursion Examples

#### Example A: Factorial Using Recursion
The problem is to find the factorial of a number $n$ (written as $n!$), which is the product of all positive integers less than or equal to $n$. The recursive logic states that $n! = n \times (n-1)!$, with the base case being $1! = 1$.

* **Trace for $n = 3$:**
  * `fact(3)` calls `3 * fact(2)`
  * `fact(2)` calls `2 * fact(1)`
  * `fact(1)` hits the base case and returns `1`
  * Unwinding the calls: 
    * `fact(2)` evaluates to `2 * 1 = 2`
    * `fact(3)` evaluates to `3 * 2 = 6`
  * **Final Output:** `6`

#### Example B: Power Calculation Using Recursion
The problem calculates the power of a base $b$ raised to an exponent $p$ using recursion, where $b^p = b \times b^{(p-1)}$.

* **Trace for Base $b = 2$ and Exponent $p = 3$:**
  * `power(2, 3)` returns `2 * power(2, 2)`
  * `power(2, 2)` returns `2 * power(2, 1)`
  * `power(2, 1)` returns `2 * power(2, 0)`
  * When the exponent reaches the base condition (0 or less), it returns `1`.
  * Unwinding the calls:
    * `power(2, 0)` returns `1`
    * `power(2, 1)` evaluates to `2 * 1 = 2`
    * `power(2, 2)` evaluates to `2 * 2 = 4`
    * `power(2, 3)` evaluates to `2 * 4 = 8`
  * **Final Output:** `8` (since $2^3 = 8$)

---

## 2. Passing Arrays to Functions

### What is it?
In programming, when you pass an array to a function, you are actually passing the memory address of the first element (reference), not a copy of the entire array. This means any changes made to the array inside the function affect the original array. Because arrays do not carry their size information automatically, the size of the array must be passed as a separate parameter.

### Where is it Used?
* Processing lists of elements like marks, temperatures, or names across different modules of a program without duplicating memory.

### Trace Example
* **Input:** Size $n = 3$, Elements = `[10, 20, 30]`.
* **Execution:** 
  * The main function reads the size and elements into an array `a`.
  * It calls the function by sending the array reference and size `(a, n)`.
  * The receiving function loops from index `0` up to `x` (size) and prints each element (`b[0]`, `b[1]`, `b[2]`).
* **Final Output:** `10 20 30`

---

## 3. String Handling Operations

Strings are arrays of characters ending with a null terminator character. Handling strings involves built-in library functions as well as manual manipulation.

### A. Library String Functions
* **`strlen()`**: Counts the number of characters in a string until the null terminator is reached.
* **`strcmp()`**: Compares two strings lexicographically (character by character). Returns `0` if both strings are identical.
* **`strcat()`**: Appends (concatenates) the second string to the end of the first string.
* **`strcpy()`**: Copies the content of one string into another.
* **`strrev()`**: Reverses the characters of a string.
* **`strlwr()` and `strupr()`**: Converts all alphabet characters in a string to lowercase or uppercase respectively.

### B. Finding and Replacing Characters in a String
* **Finding a Character:** Scans through the string character by character from start to finish. If a match is found with the target character, a flag variable is updated to signal success, and a confirmation message is displayed.
* **Replacing a Character:** Traverses the string, and whenever a target character matches, it prompts the user for a new replacement character and updates that specific position in the string array.

### C. Manual Lowercase to Uppercase Conversion
* **Concept:** In the ASCII character encoding table, lowercase letters (`a` to `z`) have ASCII values that are exactly $32$ greater than their uppercase counterparts (`A` to `Z`). 
* **Trace Example:** 
  * If the input character is `a` (ASCII value $97$), subtracting $32$ gives $65$, which corresponds to the uppercase character `A`.
  * Non-alphabetic characters or characters already in uppercase remain unchanged.

---

## 4. Custom Header Files

### What is it?
A custom header file is a user-created file (typically ending with a `.h` extension, such as `Dhvanistr.h`) that contains reusable functions, macros, or global variables. Instead of writing the same code repeatedly across multiple programs, you can bundle them into a header file and include it using quotation marks (`#include "Dhvanistr.h"`).

### Where is it Used?
* Large software projects to separate declarations and modularize code cleanly.
* Creating custom libraries of helper functions tailored to specific projects.