# Lab 4: Basic C Syntax, Data Types & Standard I/O

Welcome to **Lab 4**! This lab introduces the foundational building blocks of C programming: how a program is structured, how to store data in variables, and how to use `printf()` and `scanf()`.

---

## 1. Core Concepts in Simple Words

### 1.1 Anatomy of a C Program
- Every C program begins executing inside `main()`.
- `#include <stdio.h>` gives your program access to `printf()` (print to screen) and `scanf()` (read from keyboard).
- Every C statement must end with a semicolon (`;`).

### 1.2 The Two Essential Functions
- **`printf("text and %format", variable);`**
  - Displays output on the monitor.
  - Common escape sequences: `\n` (moves to next line), `\t` (inserts a tab space).
- **`scanf("%format", &variable);`**
  - Reads input from the keyboard into a variable.
  - **The `&` (Address-of) Rule:** `scanf` must know *where* in memory to put the user's input. Always write `&` before variable names in `scanf`!

### 1.3 Format Specifiers Cheat Sheet
- `%d` -> Integer (`int`, whole numbers like `10`, `-5`)
- `%f` -> Float (`float`, decimals like `3.14`)
- `%c` -> Character (`char`, single character like `'A'`)

### 1.4 The Integer Division Trap
In C, dividing two integers always produces an integer:
- `5 / 2` gives `2` (the decimal `.5` is dropped!).
- **How to fix:** Write at least one number as a decimal, e.g., `5.0 / 2` gives `2.5`.

---

## 2. Program-by-Program Logic & Examples

---

### Program 4A1 & 4A2: Printing Address on Single vs Multiple Lines
- **Goal:** Display an address across multiple lines.
- **Logic:**
  - Approach 1: Use multiple `printf()` statements, each ending with `\n`.
  - Approach 2: Use a single `printf()` statement containing `\n` wherever you want a line break.
- **Example:**
  - Input: None
  - Output:
    ```text
    C-504
    Trinity Tower
    Rajkot
    ```

---

### Program 4A3: Addition of Two Numbers
- **Goal:** Take two numbers from the user and print their sum.
- **Logic:**
  1. Ask user for two numbers $A$ and $B$.
  2. Store them in memory using `scanf("%d %d", &a, &b)`.
  3. Add them: `sum = a + b`.
  4. Print the result using `%d`.
- **Example:**
  - Input: `10 20`
  - Processing: `sum = 10 + 20 = 30`
  - Output: `Sum = 30`

---

### Program 4A4: Average of Three Numbers
- **Goal:** Find the average of three values.
- **Logic:**
  1. Read three numbers: $A$, $B$, and $C$.
  2. Add them together: `sum = a + b + c`.
  3. Divide by `3.0` (using `3.0` ensures the decimal part is preserved!).
  4. Print the result using `%.2f` (rounds to 2 decimal places).
- **Example:**
  - Input: `10 20 25`
  - Processing: `(10 + 20 + 25) / 3.0 = 55 / 3.0 = 18.33`
  - Output: `Average = 18.33`

---

### Program 4A5: Area of a Circle
- **Goal:** Calculate the area of a circle for a given radius $r$.
- **Logic:**
  1. Read radius $r$ from user.
  2. Use formula: $\text{Area} = 3.14 \times r \times r$.
  3. Print the area using `%f`.
- **Example:**
  - Input: `r = 5`
  - Processing: `3.14 * 5 * 5 = 78.50`
  - Output: `Area = 78.50`

---

### Program 4B1: Area of a Triangle
- **Goal:** Find the area given base and height.
- **Logic:**
  1. Read `base` and `height`.
  2. Formula: $\text{Area} = 0.5 \times \text{base} \times \text{height}$.
  3. *Note:* Never write `(1/2)` in C because `1/2` equals `0`! Always write `0.5` or divide by `2.0`.
- **Example:**
  - Input: `base = 10`, `height = 6`
  - Processing: `0.5 * 10 * 6 = 30.00`
  - Output: `Area = 30.00`

---

### Program 4B2: Simple Interest
- **Goal:** Calculate simple interest for given Principal, Rate, and Time.
- **Logic:**
  1. Read Principal ($P$), Rate of interest ($R$), and Time in years ($T$).
  2. Calculate: $\text{Interest} = \frac{P \times R \times T}{100.0}$.
- **Example:**
  - Input: `P = 10000`, `R = 7.5`, `T = 2`
  - Processing: `(10000 * 7.5 * 2) / 100.0 = 1500.00`
  - Output: `Simple Interest = 1500.00`

---

### Program 4B3: Fahrenheit to Celsius
- **Goal:** Convert temperature from Fahrenheit to Celsius.
- **Logic:**
  1. Read temperature in Fahrenheit ($F$).
  2. Formula: $C = (F - 32.0) \times \frac{5.0}{9.0}$.
  3. *Note:* You must write `(5.0 / 9.0)`, because integer `5 / 9` becomes `0`!
- **Example:**
  - Input: `F = 98.6`
  - Processing: `(98.6 - 32) * (5.0 / 9.0) = 66.6 * 0.5556 = 37.00`
  - Output: `Celsius = 37.00`

---

### Program 4C1: Seconds to Hours, Minutes, and Seconds
- **Goal:** Convert total seconds into standard clock format (HH:MM:SS).
- **Logic:**
  1. Read total seconds (e.g., `3665`).
  2. **Hours:** Divide total seconds by `3600` (since $1 \text{ hr} = 3600 \text{ sec}$).
  3. **Remaining seconds:** Take `total_seconds % 3600`.
  4. **Minutes:** Divide remaining seconds by `60` (since $1 \text{ min} = 60 \text{ sec}$).
  5. **Seconds:** Take `remaining_seconds % 60`.
- **Example:**
  - Input: `3665` seconds
  - Processing:
    - Hours: `3665 / 3600 = 1`
    - Remaining: `3665 % 3600 = 65`
    - Minutes: `65 / 60 = 1`
    - Seconds: `65 % 60 = 5`
  - Output: `01:01:05`

---

### Program 4C2: Days to Years, Weeks, and Days
- **Goal:** Break down total days into years, weeks, and remaining days.
- **Logic:**
  1. Read total days (e.g., `375`).
  2. **Years:** `total_days / 365`.
  3. **Remaining days:** `total_days % 365`.
  4. **Weeks:** `remaining_days / 7`.
  5. **Days:** `remaining_days % 7`.
- **Example:**
  - Input: `375` days
  - Processing:
    - Years: `375 / 365 = 1` (10 days left)
    - Weeks: `10 / 7 = 1`
    - Days: `10 % 7 = 3`
  - Output: `1 Year, 1 Week, 3 Days`

---

### Program 4C3: Data Type Overflow Demo
- **Goal:** Understand what happens when you store a number larger than the variable's capacity.
- **Logic:**
  1. An `unsigned char` can only store numbers from `0` to `255` (capacity: 256).
  2. If you try to store `290`, it overflows and wraps around like an odometer!
  3. Wrap-around calculation: `290 % 256 = 34`.
- **Example:**
  - Input: Storing `290` in `unsigned char c`
  - Output: Prints `34`

---

## 3. Top Student Mistakes to Avoid
1. **Missing `&` in `scanf`:** Writing `scanf("%d", a);` causes a crash. Always write `scanf("%d", &a);`.
2. **Writing `1/2` or `5/9`:** In C, integer division chops decimals to `0`. Always write `0.5` or `5.0/9.0`.
3. **Putting `\n` inside `scanf`:** Writing `scanf("%d\n", &a);` makes the program freeze waiting for extra input. Keep `scanf` simple!