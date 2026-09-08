# Lab 9: Intermediate Loops, Series & Base Conversions

Welcome to **Lab 9**! Here we use loops for mathematical series, powers, factorials, factor finding, and converting numbers to binary and Roman numerals.

---

## 1. Core Concepts in Simple Words

### 1.1 Additive vs Multiplicative Accumulators
- In addition (`sum`), start at **0** (`sum = 0`). Adding 0 changes nothing.
- In multiplication (`product`, `fact`, `power`), you **must start at 1** (`fact = 1`). If you start at 0, multiplying anything by 0 remains 0!

### 1.2 Base Conversion Intuition
To convert a number to another base (like decimal to binary):
- Divide repeatedly by the new base ($2$).
- The remainders give the digits from right to left!

---

## 2. Program-by-Program Logic & Examples

---

### Program 9A1: Alternating Series ($1 - 2 + 3 - 4 + 5 - \dots$)
- **Goal:** Sum terms where signs alternate positive and negative.
- **Logic:**
  1. Loop counter `i` goes from 1 to $N$.
  2. If `i` is **odd** ($1, 3, 5\dots$) $\to$ **add** to sum: `sum = sum + i`.
  3. If `i` is **even** ($2, 4, 6\dots$) $\to$ **subtract** from sum: `sum = sum - i`.
- **Example:**
  - Input: $N = 5$
  - Trace: `+1 - 2 + 3 - 4 + 5`
  - Calculation: `1 - 2 = -1` $\to$ `-1 + 3 = 2` $\to$ `2 - 4 = -2` $\to$ `-2 + 5 = 3`
  - Output: `Sum = 3`

---

### Program 9A2: Multiplication Table
- **Goal:** Display the times-table for a given number.
- **Logic:**
  - Loop counter `i` runs from 1 to 10.
  - Print `N * i` in each round.
- **Example:**
  - Input: $N = 7$
  - Output:
    ```text
    7 x 1 = 7
    7 x 2 = 14
    ...
    7 x 10 = 70
    ```

---

### Program 9A3: Compute Power ($x^y$) WITHOUT `pow()`
- **Goal:** Calculate $X$ raised to the power $Y$.
- **Logic:**
  1. Start with `result = 1`.
  2. Repeat $Y$ times: multiply `result` by $X$ (`result = result * x`).
- **Example:**
  - Input: $X = 3, Y = 4$
  - Round 1: `1 * 3 = 3`
  - Round 2: `3 * 3 = 9`
  - Round 3: `9 * 3 = 27`
  - Round 4: `27 * 3 = 81`
  - Output: `3^4 = 81`

---

### Program 9A4: Factorial of a Number ($n!$)
- **Goal:** Compute $1 \times 2 \times 3 \times \dots \times n$.
- **Logic:**
  1. Start with `fact = 1`.
  2. Loop `i` from 1 to $n$: `fact = fact * i`.
- **Example:**
  - Input: $n = 5$
  - Trace: `1 * 1 = 1` $\to$ `1 * 2 = 2` $\to$ `2 * 3 = 6` $\to$ `6 * 4 = 24` $\to$ `24 * 5 = 120`
  - Output: `Factorial = 120`

---

### Program 9A5: Factors of a Number
- **Goal:** Find all numbers that divide $N$ completely.
- **Logic:**
  1. Test every number `i` from 1 up to $N$.
  2. If `N % i == 0` (no remainder), then `i` is a factor! Print it.
- **Example:**
  - Input: $N = 12$
  - Tests: Divisible by 1, 2, 3, 4, 6, 12.
  - Output: `1 2 3 4 6 12`

---

### Program 9B1: Print Alphabets (A-Z and a-z)
- **Goal:** Print the alphabet using loops.
- **Logic:**
  1. In C, characters can be incremented just like numbers (`'A' + 1 == 'B'`).
  2. Start `ch = 'A'`, loop while `ch <= 'Z'`, print `ch`, then `ch++`.
  3. Repeat from `'a'` to `'z'`.
- **Example:**
  - Output: `A B C ... Z` and `a b c ... z`

---

### Program 9B2: Convert Decimal to Roman Numerals
- **Goal:** Convert standard numbers to Roman symbols.
- **Logic:**
  - Greedily subtract standard milestone values from largest to smallest:
    - While $N \ge 1000$: print `M`, subtract 1000.
    - While $N \ge 900$: print `CM`, subtract 900.
    - While $N \ge 500$: print `D`, subtract 500.
    - While $N \ge 100$: print `C`, subtract 100.
    - While $N \ge 50$: print `L`, subtract 50.
    - While $N \ge 10$: print `X`, subtract 10.
    - While $N \ge 5$: print `V`, subtract 5.
    - While $N \ge 1$: print `I`, subtract 1.
- **Example:**
  - Input: `48`
  - $48 \ge 40 \implies$ Print `XL`, remainder is `8`.
  - $8 \ge 5 \implies$ Print `V`, remainder is `3`.
  - $3 \ge 1 \implies$ Print `III`.
  - Output: `XLVIII`

---

### Program 9C1: Convert Number to Words
- **Goal:** Convert an integer like `123` into "One Two Three".
- **Logic:**
  1. **Step 1 (Reverse the number):** Since `% 10` extracts digits from right-to-left (`3, 2, 1`), we first reverse `123` into `321`.
  2. **Step 2 (Read digits):** Extract digits from the reversed number (`321 % 10 = 1`, then `2`, then `3`).
  3. Match each digit to its word using `switch-case` (`1 -> "One"`, etc.).
- **Example:**
  - Input: `45`
  - Step 1: Reversed $\to `54`$
  - Step 2: Extract `4` $\to$ Print "Four", then extract `5` $\to$ Print "Five"
  - Output: `Four Five`

---

### Program 9C2: Convert Decimal to Binary
- **Goal:** Change a decimal number into 0s and 1s.
- **Logic:**
  1. Divide number by 2 repeatedly until it becomes 0.
  2. Each remainder (`n % 2`) is the next binary bit.
  3. Build the binary number by multiplying place values ($1, 10, 100, 1000\dots$).
- **Example:**
  - Input: $13$
  - $13 / 2 = 6$ (Remainder **1**, place 1 $\to 1$)
  - $6 / 2 = 3$ (Remainder **0**, place 10 $\to 01$)
  - $3 / 2 = 1$ (Remainder **1**, place 100 $\to 101$)
  - $1 / 2 = 0$ (Remainder **1**, place 1000 $\to 1101$)
  - Output: `1101`

---

## 3. Top Student Mistakes to Avoid
1. **Factorial starting at 0:** Writing `fact = 0;` gives `0` for every answer!
2. **Missing `ch++`:** Forgetting to increment the character variable will print `'A'` forever.
3. **Integer limit for Factorials:** In C, factorials grow rapidly. $13!$ exceeds normal integer limits. Use `long long` for large numbers.
