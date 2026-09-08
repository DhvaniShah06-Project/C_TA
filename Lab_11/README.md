# Lab 11: The `for` Loop & Advanced Iteration

Welcome to **Lab 11**! The `for` loop is the most popular loop in programming when you know in advance how many times you need to repeat an action. Here we cover Fibonacci sequences, digit frequencies, and ASCII tables.

---

## 1. Core Concepts in Simple Words

### 1.1 The `for` Loop in 4 Steps
`for (1. Initialization; 2. Condition; 4. Update) { 3. Body }`
- **Step 1 (Start):** Runs only ONCE at the beginning (e.g., `i = 1`).
- **Step 2 (Check):** If true $\to$ run the body; If false $\to$ stop!
- **Step 3 (Do Work):** Executes code inside curly braces.
- **Step 4 (Step):** Increments or decrements (e.g., `i++`), then goes back to Step 2.

### 1.2 The Fibonacci Sequence
- Starts with $0, 1$.
- Every new term is the sum of the previous two:
  $$F_n = F_{n-1} + F_{n-2}$$
- Series: $0, 1, 1, 2, 3, 5, 8, 13, 21\dots$

---

## 2. Program-by-Program Logic & Examples

---

### Program 11A1 & 11A2: Print & Sum 1 to $N$
- **Goal:** Print numbers and compute their sum using `for`.
- **Logic:**
  1. Set `sum = 0`.
  2. For `i = 1` to `N` (incrementing by 1):
     - Print `i`.
     - Add to running total: `sum = sum + i`.
- **Example:**
  - Input: $N = 4$
  - Output: `1 2 3 4` and `Sum = 10`

---

### Program 11A3: Multiplication Table
- **Goal:** Print table from 1 to 10 for any given number.
- **Logic:**
  - Loop `i` from 1 to 10.
  - Print `N * i`.
- **Example:**
  - Input: $N = 6$
  - Output: `6 x 1 = 6`, `6 x 2 = 12`, ..., `6 x 10 = 60`

---

### Program 11A4: Power Calculation ($x^y$)
- **Goal:** Compute $X^Y$ using a `for` loop.
- **Logic:**
  1. Start with `power = 1`.
  2. Run loop $Y$ times: `power = power * X`.
- **Example:**
  - Input: $X = 2, Y = 5$
  - Multiplies 2 five times: $2 \times 2 \times 2 \times 2 \times 2 = 32$
  - Output: `2^5 = 32`

---

### Program 11A5: Factorial ($n!$)
- **Goal:** Calculate $n!$ using `for`.
- **Logic:**
  1. Start with `fact = 1`.
  2. Loop `i` from 1 to $n$: `fact = fact * i`.
- **Example:**
  - Input: $n = 4$
  - Calculation: $1 \times 2 \times 3 \times 4 = 24$
  - Output: `4! = 24`

---

### Program 11B1: Fibonacci Series
- **Goal:** Print first $N$ numbers of Fibonacci sequence.
- **Logic:**
  1. Start with first two known numbers: $A = 0, B = 1$.
  2. Loop $N$ times:
     - Print $A$.
     - Next number is sum of both: $C = A + B$.
     - Slide variables forward for the next round: $A = B$ and $B = C$.
- **Example:**
  - Input: $N = 6$
  - Round 1: Print `0` $\to C = 0 + 1 = 1$, slide: $A=1, B=1$
  - Round 2: Print `1` $\to C = 1 + 1 = 2$, slide: $A=1, B=2$
  - Round 3: Print `1` $\to C = 1 + 2 = 3$, slide: $A=2, B=3$
  - Round 4: Print `2` $\to C = 2 + 3 = 5$, slide: $A=3, B=5$
  - Round 5: Print `3`
  - Round 6: Print `5`
  - Output: `0 1 1 2 3 5`

---

### Program 11B2: Frequency Count of Each Digit (0 to 9)
- **Goal:** Count how many times each digit appears in a large number.
- **Logic:**
  1. Outer loop checks each candidate digit $D$ from 0 to 9.
  2. Inner loop extracts digits from the number by repeatedly taking `rem = temp % 10` and `temp = temp / 10`.
  3. If `rem == D`, increment `count++`.
  4. If `count > 0`, print the frequency.
- **Example:**
  - Input: `12232`
  - Digit 1: appears 1 time
  - Digit 2: appears 3 times
  - Digit 3: appears 1 time

---

### Program 11B3: Printable ASCII Value Table
- **Goal:** Display printable keyboard characters alongside their numeric codes.
- **Logic:**
  1. Loop integer `i` from 32 (space) to 126 (`~`).
  2. Print `i` as integer (`%d`) and as character (`%c`).
- **Example:**
  - Output:
    ```text
    65 -> A
    66 -> B
    97 -> a
    ```

---

### Program 11C1: Swap First and Last Digit of a Number
- **Goal:** Transform a number like `1234` into `4231`.
- **Logic:**
  1. **Last digit:** `last = num % 10`.
  2. **Total digits & Place:** Using $\log_{10}(num)$, find place value of first digit (e.g., $1000$ for 4-digit number).
  3. **First digit:** `first = num / place`.
  4. **Middle part:** Remove first and last digits from number.
  5. **Reassemble:** Put `last` at highest place, keep `middle`, put `first` at lowest place!
- **Example:**
  - Input: `7249`
  - First: `7`, Last: `9`, Middle: `24`
  - Rebuilt: `9000 + 240 + 7 = 9247`
  - Output: `7249 becomes 9247`

---

### Program 11C2: Power WITHOUT `*` and WITHOUT `pow()`
- **Goal:** Compute $X^Y$ using only repeated addition.
- **Logic:**
  - Since multiplication is repeated addition ($3 \times 4 = 3 + 3 + 3 + 3$):
  - Use an outer loop running $Y-1$ times for exponentiation.
  - Use an inner loop adding the current answer to itself $X$ times!
- **Example:**
  - Input: $3^3$
  - Start with 3.
  - Round 1 ($3 \times 3$): Add 3 three times $\to 3 + 3 + 3 = 9$.
  - Round 2 ($9 \times 3$): Add 9 three times $\to 9 + 9 + 9 = 27$.
  - Output: `27`

---

## 3. Top Student Mistakes to Avoid
1. **Accidental Semicolon after `for`:** Writing `for (i = 1; i <= n; i++);` will run the loop with an empty body, and only execute following lines once with `i = n + 1`!
2. **Infinite loop with `for`:** Forgetting to update `i++` causes the condition to remain true forever.
