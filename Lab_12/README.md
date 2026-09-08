# Lab 12: Nested Loops & Pattern Printing

Welcome to **Lab 12**! Nested loops (loops inside loops) are used to create 2D patterns, evaluate nested series, and generate mathematical structures like **Pascal's Triangle**.

---

## 1. Core Concepts in Simple Words

### 1.1 The Digital Clock Mental Model
Think of nested loops like a digital clock:
- **Outer Loop:** The **Hours** hand (moves slowly, controls the **ROWS**).
- **Inner Loop:** The **Minutes** hand (runs through all its numbers for *every single hour*, controls the **COLUMNS / STARS**).

### 1.2 The 3 Golden Rules to Solve ANY Pattern
Whenever you see a pattern in an exam:
1. **Count Rows:** How many horizontal lines? $\implies$ Outer loop `for (i = 1; i <= n; i++)`.
2. **Count Columns:** In row `i`, how many stars/numbers are printed? $\implies$ Inner loop `for (j = 1; j <= i; j++)`.
3. **Decide What to Print:**
   - Always a star? $\to$ print `*`
   - Numbers increasing across row ($1, 2, 3$)? $\to$ print column index `j`
   - Same number across entire row ($2\ 2$, then $3\ 3\ 3$)? $\to$ print row index `i`

---

## 2. Program-by-Program Logic & Examples

---

### Program 12Aa: Right-Angled Star Triangle
- **Goal:** Print an expanding triangle of stars.
- **Pattern:**
  ```text
  *
  * *
  * * *
  * * * *
  ```
- **Logic:**
  - Row $i$ prints exactly $i$ stars.
  - Outer loop `i` runs from 1 to $N$.
  - Inner loop `j` runs from 1 to $i$, printing `* `.
  - After inner loop finishes, print `\n` to move to the next row.
- **Example:**
  - Row 1 ($i = 1$): prints 1 star $\to$ `*`
  - Row 2 ($i = 2$): prints 2 stars $\to$ `* *`
  - Row 3 ($i = 3$): prints 3 stars $\to$ `* * *`

---

### Program 12Ab: Increasing Column Numbers
- **Goal:** Print numbers counting up from 1 to $i$ in each row.
- **Pattern:**
  ```text
  1
  1 2
  1 2 3
  1 2 3 4
  ```
- **Logic:**
  - Same row/column counts as the star triangle, but instead of printing `*`, print the **column index `j`**!
- **Example:**
  - Row 1 ($i=1$): $j$ goes from 1 to 1 $\to$ prints `1`
  - Row 2 ($i=2$): $j$ goes from 1 to 2 $\to$ prints `1 2`
  - Row 3 ($i=3$): $j$ goes from 1 to 3 $\to$ prints `1 2 3`

---

### Program 12Ac: Decreasing Numbers Pattern
- **Goal:** Print numbers counting down from 5 in each row.
- **Pattern:**
  ```text
  5
  5 4
  5 4 3
  5 4 3 2
  5 4 3 2 1
  ```
- **Logic:**
  - In each row `i`, start inner loop at 5 and count downwards $i$ times!
  - Inner loop: `for (j = 5; j >= 5 - i + 1; j--)`, print `j`.
- **Example:**
  - Row 1: prints `5`
  - Row 2: prints `5 4`
  - Row 3: prints `5 4 3`

---

### Program 12Ad: Repeating Row Number Pattern
- **Goal:** Print the current row number across all columns in that row.
- **Pattern:**
  ```text
  1
  2 2
  3 3 3
  4 4 4 4
  ```
- **Logic:**
  - Row $i$ has $i$ columns, but every column in row $i$ displays the **row number `i`**!
  - Inside inner loop, print `i` instead of `j`.
- **Example:**
  - Row 1 ($i=1$): prints `1`
  - Row 2 ($i=2$): prints `2 2`
  - Row 3 ($i=3$): prints `3 3 3`

---

### Program 12B1: Sum of Nested Series: $1 + (1+2) + (1+2+3) + \dots$
- **Goal:** Evaluate the cumulative triangular series sum.
- **Logic:**
  - Outer loop `i` runs from 1 to $N$ (controls each bracket).
  - Inner loop `j` runs from 1 to $i$ and adds numbers into `totalSum`.
- **Example:**
  - For $N = 3$:
    - Bracket 1: $1$
    - Bracket 2: $1 + 2 = 3$
    - Bracket 3: $1 + 2 + 3 = 6$
    - Total Sum: $1 + 3 + 6 = 10$

---

### Program 12B2: Approximation of Euler's Number ($e = 1 + \frac{1}{1!} + \frac{1}{2!} + \dots$)
- **Goal:** Estimate mathematical constant $e \approx 2.71828$.
- **Logic:**
  - Start with `sum = 1.0` and `fact = 1.0`.
  - Loop `i` from 1 to $N$:
    - Multiply to get next factorial: `fact = fact * i`.
    - Add fraction: `sum = sum + (1.0 / fact)`.
- **Example:**
  - For $N = 3$:
    - Term 0: $1.0$
    - Term 1: $1 / 1! = 1.0 \implies \text{sum} = 2.0$
    - Term 2: $1 / 2! = 0.5 \implies \text{sum} = 2.5$
    - Term 3: $1 / 3! = 0.1667 \implies \text{sum} = 2.6667$

---

### Program 12C1: Pascal's Triangle
- **Goal:** Print Pascal's Triangle aligned as a centered pyramid.
- **Visual Target:**
  ```text
       1 
      1 1 
     1 2 1 
    1 3 3 1 
   1 4 6 4 1 
  ```
- **How to Explain Simply:**
  1. **Row index $i$ goes from 0 to $n-1$.**
  2. **Step 1 (Spaces):** Print $n - i$ spaces at the start of each row to push it into a triangle shape.
  3. **Step 2 (Numbers):** Column $j$ goes from 0 to $i$.
     - First number is always 1 (`coef = 1`).
     - Every next number is calculated from the previous one using:
       $$\text{next} = \text{previous} \times \frac{i - j + 1}{j}$$
     - Print each number followed by a space (`printf("%d ", coef)`).
- **Example Trace (Row $i = 4$):**
  - $j = 0 \implies 1$
  - $j = 1 \implies 1 \times (4 - 1 + 1) / 1 = \mathbf{4}$
  - $j = 2 \implies 4 \times (4 - 2 + 1) / 2 = \mathbf{6}$
  - $j = 3 \implies 6 \times (4 - 3 + 1) / 3 = \mathbf{4}$
  - $j = 4 \implies 4 \times (4 - 4 + 1) / 4 = \mathbf{1}$
  - Output for row 4: `1 4 6 4 1`

---

### Program 12C2: Nested Loop with `break` Statement
- **Goal:** Understand the scope of `break` inside nested loops.
- **Logic:**
  - A `break` statement **ONLY terminates the innermost loop** containing it!
  - The outer loop continues running unaffected.
- **Example:**
  - If outer loop runs 5 times and inner loop immediately executes `break;` on every round:
  - The outer statement runs all 5 times!
  - Output: Prints "Darshan University" 5 times.

---

## 3. Top Student Mistakes to Avoid
1. **Forgetting `printf("\n");`:** If you don't print a newline after the inner loop finishes, all stars will print in one long single horizontal line!
2. **Confusing `i` and `j`:** Writing `j <= n` instead of `j <= i` turns your triangle into a full rectangle!
3. **Pascal Triangle Missing `/ j`:** If you forget `/ j` in the formula, numbers multiply exponentially instead of producing the triangle values.
