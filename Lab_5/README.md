# Lab 5: Decision Making (Basic `if`, `if-else` & Bitwise Operations)

Welcome to **Lab 5**! In this lab, we learn how programs make decisions using conditions, how to swap variables, and how to use bitwise shortcuts.

---

## 1. Core Concepts in Simple Words

### 1.1 What is "True" in C?
- **Zero (`0`)** is treated as **FALSE**.
- **Any non-zero value** (`1`, `-5`, `100`) is treated as **TRUE**.

### 1.2 Comparison Operators Cheat Sheet
- `==` -> Is equal to? (Be careful: single `=` assigns, double `==` compares!)
- `!=` -> Is not equal to?
- `>`, `<`, `>=`, `<=` -> Greater than, Less than, etc.
- `&&` (AND) -> True only if **both** conditions are true.
- `||` (OR) -> True if **at least one** condition is true.
- `!` (NOT) -> Reverses true to false and vice-versa.

---

## 2. Program-by-Program Logic & Examples

---

### Program 5A1: Convert Feet to Inches
- **Goal:** Convert height or distance from feet to inches.
- **Logic:**
  1. Read value in feet.
  2. Multiply by 12 (since $1 \text{ foot} = 12 \text{ inches}$).
  3. Print the answer.
- **Example:**
  - Input: `5.5` feet
  - Processing: `5.5 * 12 = 66.0`
  - Output: `66.0 inches`

---

### Program 5A2: Swapping Two Numbers
- **Goal:** Exchange the values stored in two variables $A$ and $B$.
- **Logic:**
  - **Method 1 (Using a temporary box):**
    1. Copy $A$ into `temp`.
    2. Copy $B$ into $A$.
    3. Copy `temp` into $B$.
  - **Method 2 (Without a third variable - Arithmetic trick):**
    1. Add both: $A = A + B$ (now $A$ holds the combined total).
    2. Subtract $B$: $B = A - B$ ($B$ now gets original $A$).
    3. Subtract new $B$: $A = A - B$ ($A$ now gets original $B$).
- **Example:**
  - Start: $A = 10, B = 20$
  - Add: $A = 10 + 20 = 30$
  - Step 2: $B = 30 - 20 = 10$
  - Step 3: $A = 30 - 10 = 20$
  - End: $A = 20, B = 10$

---

### Program 5A3: Check Positive or Negative
- **Goal:** Determine if a number is positive or negative.
- **Logic:**
  1. Read a number.
  2. If `number >= 0`, print "Positive".
  3. Otherwise, print "Negative".
- **Example 1:**
  - Input: `15` -> Output: `Positive`
- **Example 2:**
  - Input: `-8` -> Output: `Negative`

---

### Program 5A4: Check Odd or Even
- **Goal:** Identify whether an integer is even or odd.
- **Logic:**
  1. Divide the number by 2 and check the remainder using `%`.
  2. If `number % 2 == 0`, it divides evenly -> print "Even".
  3. Otherwise -> print "Odd".
- **Example 1:**
  - Input: `14` -> `14 % 2 = 0` -> `Even`
- **Example 2:**
  - Input: `27` -> `27 % 2 = 1` -> `Odd`

---

### Program 5A5: Largest of Three Numbers
- **Goal:** Find the maximum among numbers $A$, $B$, and $C$.
- **Logic:**
  1. If $A \ge B$ and $A \ge C$, then $A$ is the largest.
  2. Else if $B \ge A$ and $B \ge C$, then $B$ is the largest.
  3. Otherwise, $C$ must be the largest.
- **Example:**
  - Input: $A = 45, B = 82, C = 30$
  - Processing: $82 \ge 45$ and $82 \ge 30$ is True.
  - Output: `82 is the largest`

---

### Program 5A6: Check Vowel or Consonant
- **Goal:** Check if an entered letter is a vowel or consonant.
- **Logic:**
  1. Read a character.
  2. Check if it matches any vowel: `a, e, i, o, u` (or uppercase `A, E, I, O, U`) using `||` (OR).
  3. If yes -> print "Vowel".
  4. Else -> print "Consonant".
- **Example 1:**
  - Input: `'E'` -> Matches vowel list -> `Vowel`
- **Example 2:**
  - Input: `'b'` -> Does not match -> `Consonant`

---

### Program 5B1 & 5B2: OS Shutdown & System Time
- **Goal:** Interact with operating system functions.
- **Logic:**
  - `system("shutdown /s /t 60");` from `<stdlib.h>` passes an OS command to shut down the machine in 60 seconds.
  - `time()` and `ctime()` from `<time.h>` fetch the computer's current clock time and format it as a readable date/time string.
- **Example:**
  - Output: `Current Time: Wed Sep 09 04:30:15 2026`

---

### Program 5C1: Print Inside `if` Without Semicolon
- **Goal:** Print a message without putting a semicolon after `printf`.
- **Logic:**
  1. Place `printf("HELLO WORLD")` directly inside the `if(...)` condition.
  2. `printf()` prints the text and returns the count of characters printed (e.g., 11).
  3. Since 11 is non-zero, C considers it TRUE and enters the empty block!
- **Example:**
  - Code: `if (printf("HELLO WORLD")) { }`
  - Output: `HELLO WORLD`

---

### Program 5C2: Odd or Even WITHOUT `%` Operator
- **Goal:** Check even/odd using bitwise logic.
- **Logic:**
  1. In binary, all Odd numbers end with bit `1` ($5 = 101_2, 7 = 111_2$).
  2. All Even numbers end with bit `0` ($4 = 100_2, 6 = 110_2$).
  3. Using Bitwise AND: `number & 1`.
     - If result is `1` -> number is Odd!
     - If result is `0` -> number is Even!
- **Example:**
  - Input: `9` ($1001_2$) -> `9 & 1 = 1` -> `Odd`
  - Input: `8` ($1000_2$) -> `8 & 1 = 0` -> `Even`

---

### Program 5C3: Multiply and Divide by 2 using Bit Shifts
- **Goal:** Perform $\times 2$ and $/ 2$ faster without arithmetic operators.
- **Logic:**
  - **Left Shift (`num << 1`):** Shifts all binary bits left by 1 position and adds a zero at the end ==> Multiplies by 2!
  - **Right Shift (`num >> 1`):** Drops the last binary bit ==> Divides by 2!
- **Example:**
  - Let `num = 12` ($1100_2$)
  - `12 << 1` becomes $11000_2 = 24$ ($\times 2$)
  - `12 >> 1` becomes $110_2 = 6$ ($/ 2$)

---

### Program 5C4: The Famous `if (x = 1)` Exam Trap
- **Goal:** Understand the difference between assignment and comparison.
- **Logic:**
  - `if (x == 1)` -> checks if $x$ is equal to 1.
  - `if (x = 1)` -> **assigns** 1 to $x$, and returns 1. Since 1 is non-zero (TRUE), this condition will **ALWAYS execute**!
- **Example:**
  - If `x = 5;` and we run `if (x = 1)`, it prints TRUE and changes $x$ to 1!

---

## 3. Top Student Mistakes to Avoid
1. **Accidental semicolon after `if`:** Writing `if (a > b);` cuts off the `if`. The code below it will run every single time!
2. **Writing `10 < x < 20`:** In C, this does NOT check a range. You must write `if (x > 10 && x < 20)`.
3. **Using `=` instead of `==` in conditions:** Always double-check your equal signs in `if` statements!