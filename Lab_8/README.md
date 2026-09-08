# Lab 8: Iteration - `while` & `do-while` Loops

Welcome to **Lab 8**! Loops allow the computer to repeat statements automatically without writing redundant code. Here we learn the two fundamental structures: **`while`** and **`do-while`**.

---

## 1. Core Concepts in Simple Words

### 1.1 The 3 Parts of Every Loop
1. **Start (Initialization):** Where do we begin? (e.g., `i = 1;`)
2. **Stop Condition:** When should we keep going? (e.g., `i <= 10;`)
3. **Step (Update):** How do we move forward? (e.g., `i++;`)
> *If you forget the step, the loop never ends (Infinite Loop)!*

### 1.2 `while` vs `do-while`
- **`while` (Entry-Controlled):** Checks condition **before** doing the work. If condition is false initially, it runs **0 times**.
- **`do-while` (Exit-Controlled):** Does the work first, then checks condition. Guaranteed to run **at least 1 time**!

---

## 2. Program-by-Program Logic & Examples

---

### Program 8A1: Print 1 to $N$ (`while` and `do-while`)
- **Goal:** Print all counting numbers up to $N$.
- **Logic:**
  1. Set counter `i = 1`.
  2. While `i <= n`: print `i`, then increment `i = i + 1`.
  3. Stop when `i` passes $n$.
- **Example:**
  - Input: $N = 5$
  - Trace: `1 -> 2 -> 3 -> 4 -> 5`
  - Output: `1 2 3 4 5`

---

### Program 8A2: Print Odd Numbers 1 to $N$
- **Goal:** Print only odd values up to $N$.
- **Logic:**
  - Start at `i = 1`.
  - Jump by 2 each time (`i = i + 2`). This naturally hits only odd numbers: $1, 3, 5, 7\dots$
- **Example:**
  - Input: $N = 9$
  - Output: `1 3 5 7 9`

---

### Program 8A3: Numbers Divisible by 2 Between Two Limits
- **Goal:** Print even numbers in a custom range `[start, end]`.
- **Logic:**
  1. Loop counter runs from `start` to `end`.
  2. For each number, test `if (i % 2 == 0)`.
  3. If true, print it.
- **Example:**
  - Input: `start = 11, end = 18`
  - Output: `12 14 16 18`

---

### Program 8A4: Sum of Numbers from 1 to $N$
- **Goal:** Compute $1 + 2 + 3 + \dots + N$.
- **Logic (Accumulator Pattern):**
  1. Create a running bucket: `sum = 0`.
  2. Counter `i` goes from 1 to $N$.
  3. Each round: add `i` into `sum` (`sum = sum + i`).
  4. After loop finishes, print `sum`.
- **Example:**
  - Input: $N = 4$
  - Trace: `0 + 1 = 1` $\to$ `1 + 2 = 3` $\to$ `3 + 3 = 6` $\to$ `6 + 4 = 10`
  - Output: `Sum = 10`

---

### Program 8A5: Count Odd and Even Numbers from a Stream
- **Goal:** Read several numbers from user and count how many are odd and even.
- **Logic:**
  1. Ask user how many numbers they want to enter.
  2. In a loop, read one number each round.
  3. If number `% 2 == 0`, increment `evenCount++`.
  4. Else, increment `oddCount++`.
- **Example:**
  - Input: `4` numbers: `12, 7, 9, 20`
  - Output: `Even count = 2, Odd count = 2`

---

### Program 8B1: Square Roots of Numbers 0 to 9
- **Goal:** Print numbers and their square roots.
- **Logic:**
  1. Loop `i` from 0 to 9.
  2. Print `i` and `sqrt(i)` using `<math.h>`.
- **Example:**
  - Output:
    ```text
    0 -> 0.00
    1 -> 1.00
    4 -> 2.00
    9 -> 3.00
    ```

---

### Program 8B2: Numbers in [100, 200] Divisible by 7 and NOT by 5
- **Goal:** Find numbers matching dual criteria.
- **Logic:**
  1. Loop `i` from 101 to 199.
  2. Test condition: `(i % 7 == 0) && (i % 5 != 0)`.
  3. If matched, print the number.
- **Example:**
  - `105` is div by 7, but also div by 5 $\to$ Skipped!
  - `112` is div by 7, not by 5 $\to$ Printed!
  - Output: `112 119 126 133 147 ...`

---

### Program 8B3: AP Series: 1, 4, 7, 10... (50 Terms)
- **Goal:** Generate 50 terms of an arithmetic progression.
- **Logic:**
  1. First term is `1`.
  2. In each iteration, print the term and add `3` to it.
  3. Loop runs exactly 50 times.
- **Example:**
  - Trace: `1 -> 4 -> 7 -> 10 -> 13 ...`

---

### Program 8C1: Sum of Squares of Numbers Ending with 9
- **Goal:** Square each number; if the square ends with 9, add to total sum.
- **Logic:**
  1. Loop `i` from 1 to $N$.
  2. Compute square: `sq = i * i`.
  3. Check last digit: `if (sq % 10 == 9)`.
  4. If yes, add to `sum` and increment `count`.
- **Example:**
  - For $i = 3 \implies 3^2 = 9$ (ends in 9 $\to$ included).
  - For $i = 7 \implies 7^2 = 49$ (ends in 9 $\to$ included).

---

### Program 8C3: Integer Division WITHOUT `/` or `%` (Repeated Subtraction)
- **Goal:** Divide $A$ by $B$ using basic logic.
- **Logic:**
  1. Division is simply asking: *"How many times can I subtract $B$ from $A$?"*
  2. Keep subtracting: `dividend = dividend - divisor` and increment `quotient++`.
  3. Stop when remainder is smaller than divisor.
  4. What's left over is the remainder!
- **Example:**
  - Input: $14 / 3$
  - Round 1: $14 - 3 = 11$ (Count = 1)
  - Round 2: $11 - 3 = 8$ (Count = 2)
  - Round 3: $8 - 3 = 5$ (Count = 3)
  - Round 4: $5 - 3 = 2$ (Count = 4)
  - Remaining 2 is less than 3 $\to$ Stop!
  - Output: `Quotient = 4, Remainder = 2`

---

### Program 8C4: Multiplication WITHOUT `*` (Repeated Addition)
- **Goal:** Multiply $A \times B$ using only addition.
- **Logic:**
  1. $A \times B$ means adding $A$ to itself $B$ times.
  2. Start with `product = 0`.
  3. Loop $B$ times: `product = product + a`.
- **Example:**
  - Input: $4 \times 3$
  - Round 1: `0 + 4 = 4`
  - Round 2: `4 + 4 = 8`
  - Round 3: `8 + 4 = 12`
  - Output: `Product = 12`

---

## 3. Top Student Mistakes to Avoid
1. **Uninitialized `sum`:** If you forget `sum = 0;`, your answer starts with garbage numbers!
2. **Accidental Semicolon:** `while (i <= 10);` causes an endless blank loop!
3. **Missing loop update:** Forgetting `i++` causes the loop to run forever.
