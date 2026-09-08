# Lab 10: Number Manipulation Algorithms & Prime Numbers

Welcome to **Lab 10**! This is one of the most famous labs in first-year engineering. It covers digit extraction, prime testing, palindromes, perfect numbers, Armstrong numbers, and GCD/LCM.

---

## 1. Core Concepts in Simple Words

### 1.1 The Golden 2-Step Digit Extraction Rule
Nearly every digit manipulation problem uses this exact loop:
```text
While (number > 0):
  1. rem = number % 10   --> Grabs the last digit!
  2. ... (Do your math with rem)
  3. number = number / 10 --> Chops off the last digit!
```
*Repeat until the number becomes 0!*

### 1.2 Mathematical Cheat Sheet
- **Prime Number:** Greater than 1, divisible *only* by 1 and itself ($2, 3, 5, 7, 11\dots$).
- **Palindrome:** Reads identical backwards ($121, 1331$).
- **Perfect Number:** Sum of proper divisors equals the number ($6 = 1 + 2 + 3$).
- **Armstrong Number:** Sum of (digits)$^{\text{total digits}}$ equals the number ($153 = 1^3 + 5^3 + 3^3$).
- **GCD & LCM Rule:** $\text{LCM} = \frac{A \times B}{\text{GCD}}$.

---

## 2. Program-by-Program Logic & Examples

---

### Program 10A1: Sum of First and Last Digit
- **Goal:** Add only the first and last digits of a number.
- **Logic:**
  1. **Last digit:** Easily obtained using `n % 10`.
  2. **First digit:** Repeatedly divide `n` by 10 until it becomes a single digit (`n < 10`).
  3. Add them together.
- **Example:**
  - Input: `4829`
  - Last digit: `4829 % 10 = 9`
  - First digit: `4829 / 10 = 482` $\to$ `/ 10 = 48` $\to$ `/ 10 = 4` (Stop, since $4 < 10$).
  - Sum: `4 + 9 = 13`
  - Output: `Sum = 13`

---

### Program 10A2: Dynamic Sum & Average Until User Stops
- **Goal:** Accept numbers from user continuously until they say stop.
- **Logic:**
  1. Use a `do-while` loop.
  2. Read a number, add to `sum`, increment `count`.
  3. Ask user: "Enter another? (y/n)".
  4. If user types `'y'`, repeat.
  5. Finally, compute `average = sum / count`.
- **Example:**
  - Inputs: `10, 20, 30`
  - Sum: `60`, Count: `3`, Average: `20.00`

---

### Program 10A3: Prime Number Check (Divisor Count)
- **Goal:** Check if a number is prime.
- **Logic:**
  1. Loop counter `i` from 1 to $N$.
  2. If `N % i == 0`, increment `count`.
  3. If `count == 2` (divisible only by 1 and itself) $\implies$ **Prime**.
  4. Else $\implies$ **Not Prime**.
- **Example 1:** $N = 7$ (divisors: 1, 7 $\to$ count 2) $\implies$ `Prime`
- **Example 2:** $N = 9$ (divisors: 1, 3, 9 $\to$ count 3) $\implies$ `Not Prime`

---

### Program 10A4: Print Individual Digits
- **Goal:** Break a number into its individual digits.
- **Logic:**
  - Repeatedly take `rem = n % 10`, print it, and chop with `n = n / 10` until $n = 0$.
- **Example:**
  - Input: `582`
  - Round 1: `582 % 10 = 2`, remaining: `58`
  - Round 2: `58 % 10 = 8`, remaining: `5`
  - Round 3: `5 % 10 = 5`, remaining: `0` (Stop!)
  - Output: `2 8 5` (right to left)

---

### Program 10A5: Reverse a Number
- **Goal:** Turn `1234` into `4321`.
- **Logic:**
  1. Start with `rev = 0`.
  2. In each round:
     - Multiply existing `rev` by 10 and add the extracted digit: `rev = (rev * 10) + rem`.
     - Chop off last digit: `n = n / 10`.
  3. Repeat until $n = 0$.
- **Example:**
  - Input: `482`
  - Round 1: `rev = (0 * 10) + 2 = 2`
  - Round 2: `rev = (2 * 10) + 8 = 28`
  - Round 3: `rev = (28 * 10) + 4 = 284`
  - Output: `Reversed = 284`

---

### Program 10B1: Perfect Number Check
- **Goal:** Check if sum of proper divisors equals the number itself.
- **Logic:**
  1. Loop `i` from 1 up to $N/2$.
  2. If `N % i == 0`, add `i` to `sum`.
  3. If `sum == N` $\implies$ **Perfect Number**.
- **Example:**
  - Input: $N = 6$
  - Proper divisors of 6: $1, 2, 3$
  - Sum: $1 + 2 + 3 = 6$ (Matches original!)
  - Output: `6 is a Perfect Number`

---

### Program 10B2: Prime Check with `flag` & Early Exit
- **Goal:** Faster prime check that stops the moment a factor is found.
- **Logic:**
  1. Set `isPrime = 1` (assume prime).
  2. If $N \le 1$, set `isPrime = 0`.
  3. Loop `i` from 2 up to $N/2$:
     - If `N % i == 0`, set `isPrime = 0` and **`break` immediately**! No need to check any further.
- **Example:**
  - Input: $N = 100$
  - At `i = 2`: $100 \% 2 == 0 \implies$ Sets `isPrime = 0` and exits in 1 step! (Does not check up to 100).
  - Output: `Not Prime`

---

### Program 10B3: Palindrome Number Check
- **Goal:** Check if a number reads the same reversed.
- **Logic:**
  1. Save original: `original = n;`.
  2. Reverse the number using the reverse algorithm.
  3. If `original == rev` $\implies$ **Palindrome**.
- **Example 1:**
  - Input: `121` $\to$ Reversed: `121` $\to$ `Palindrome`
- **Example 2:**
  - Input: `123` $\to$ Reversed: `321` $\to$ `Not a Palindrome`

---

### Program 10C1: Armstrong Number Check
- **Goal:** Check if sum of digits raised to power of digit count equals original number.
- **Logic:**
  1. **Count digits:** Divide by 10 repeatedly until 0 to find total digits $D$.
  2. **Sum powers:** Extract each digit, compute $\text{digit}^D$, add to sum.
  3. If `sum == original` $\implies$ **Armstrong Number**.
- **Example:**
  - Input: $153$ (3 digits)
  - Calculation: $1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153$
  - Output: `153 is an Armstrong Number`

---

### Program 10C2: HCF (GCD) and LCM of Two Numbers
- **Goal:** Find highest common divisor and least common multiple.
- **Logic (Euclid's Algorithm):**
  1. While $B \ne 0$:
     - Take remainder: `rem = A % B`.
     - Shift values: `A = B; B = rem;`.
  2. When $B$ reaches 0, $A$ holds the **HCF**!
  3. Compute **LCM**: $\text{LCM} = (\text{original\_A} \times \text{original\_B}) / \text{HCF}$.
- **Example:**
  - Input: $A = 18, B = 12$
  - Round 1: `18 % 12 = 6` $\to A = 12, B = 6$
  - Round 2: `12 % 6 = 0` $\to A = 6, B = 0$ (Stop!)
  - $\text{HCF} = 6$
  - $\text{LCM} = (18 \times 12) / 6 = 36$
  - Output: `HCF = 6, LCM = 36`

---

## 3. Top Student Mistakes to Avoid
1. **Losing the original number:** After a `while(n > 0)` loop, `n` is always `0`! Always save `original = n;` *before* the loop for palindrome or Armstrong checks.
2. **Checking 1 as Prime:** $1$ is NOT a prime number. Always ensure numbers $\le 1$ are treated as not prime.
