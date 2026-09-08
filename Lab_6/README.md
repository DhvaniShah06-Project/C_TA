# Lab 6: Multi-way Decision Making (`else-if` Ladder & Nested `if`)

Welcome to **Lab 6**! When programs have to choose between more than two options (e.g., grading scales, tax/salary brackets, calculators, electricity bills), we use an **`else-if` ladder** or **nested `if`**.

---

## 1. Core Concepts in Simple Words

### 1.1 What is an `else-if` Ladder?
Think of it like stairs:
- Step 1: Check `if (condition_1)`. If true, do the action and skip the rest of the stairs!
- Step 2: If false, check `else if (condition_2)`.
- Step 3: If all conditions are false, fall into the final `else` safety net.

### 1.2 ASCII Values for Character Recognition
Computers store characters as numbers:
- `'A'` to `'Z'` $\to$ Values 65 to 90
- `'a'` to `'z'` $\to$ Values 97 to 122
- `'0'` to `'9'` $\to$ Values 48 to 57

---

## 2. Program-by-Program Logic & Examples

---

### Program 6A1: Simple Calculator (+, -, *, /)
- **Goal:** Perform the user's chosen arithmetic operation.
- **Logic:**
  1. Read two numbers $A$ and $B$, and an operator character (`+`, `-`, `*`, `/`).
  2. If operator is `+` $\to$ compute $A + B$.
  3. Else if `-` $\to$ compute $A - B$.
  4. Else if `*` $\to$ compute $A \times B$.
  5. Else if `/` $\to$ check if $B \ne 0$ before dividing (division by zero is undefined!).
  6. Else $\to$ print "Invalid Operator".
- **Example:**
  - Input: `15 3` and operator `/`
  - Processing: $15 / 3 = 5.0$
  - Output: `Result = 5.0`

---

### Program 6A2: Gross Salary Calculation
- **Goal:** Calculate total pay based on basic salary tiers.
- **Logic:**
  1. Read Basic Salary.
  2. Check brackets from highest to lowest:
     - If $\text{Basic} \ge 30,000 \implies \text{HRA} = 30\%, \text{DA} = 95\%$
     - Else if $\text{Basic} \ge 20,000 \implies \text{HRA} = 25\%, \text{DA} = 90\%$
     - Else if $\text{Basic} \ge 10,000 \implies \text{HRA} = 20\%, \text{DA} = 80\%$
     - Else $\implies \text{HRA} = 10\%, \text{DA} = 50\%$
  3. Total Gross Salary $= \text{Basic} + \text{HRA} + \text{DA}$.
- **Example:**
  - Input: Basic $= 25,000$ (falls into second bracket)
  - Processing: HRA $= 25,000 \times 0.25 = 6,250$; DA $= 25,000 \times 0.90 = 22,500$
  - Total Gross $= 25,000 + 6,250 + 22,500 = 53,750$
  - Output: `Gross Salary = 53750.00`

---

### Program 6A3: Character Classification
- **Goal:** Determine if a character is uppercase, lowercase, digit, or special symbol.
- **Logic:**
  1. Read a character `ch`.
  2. If `ch >= 'A' && ch <= 'Z'` $\to$ Uppercase Letter.
  3. Else if `ch >= 'a' && ch <= 'z'` $\to$ Lowercase Letter.
  4. Else if `ch >= '0' && ch <= '9'` $\to$ Digit.
  5. Else $\to$ Special Symbol (e.g. `@`, `#`, `$`).
- **Example 1:** Input `'G'` $\to$ Output: `Uppercase`
- **Example 2:** Input `'7'` $\to$ Output: `Digit`
- **Example 3:** Input `'%'` $\to$ Output: `Special Symbol`

---

### Program 6A4: Check if Last Digit is Odd or Even
- **Goal:** Check the parity of the last digit of any number.
- **Logic:**
  1. Extract last digit by taking remainder with 10: `last = number % 10`.
  2. If `last % 2 == 0` $\to$ Even.
  3. Else $\to$ Odd.
- **Example:**
  - Input: `9843`
  - Processing: `9843 % 10 = 3`. Since `3 % 2 == 1` $\to$ Odd.
  - Output: `Last digit (3) is Odd`

---

### Program 6A5: Student Grade / Class Awarding
- **Goal:** Award division based on percentage marks.
- **Logic:**
  1. Read marks of 5 subjects, sum them, and compute percentage: `per = total / 5.0`.
  2. Check brackets downwards:
     - $\ge 70\% \to$ Distinction
     - $\ge 60\% \to$ First Class
     - $\ge 45\% \to$ Second Class
     - $\ge 35\% \to$ Pass Class
     - Below $35\% \to$ Fail
- **Example:**
  - Input: Marks sum to `340` $\to$ `percentage = 68%`
  - Output: `First Class`

---

### Program 6B1: Electricity Bill Calculation with Slabs
- **Goal:** Calculate power bill using tiered usage slabs plus a $20\%$ surcharge.
- **Logic:**
  - **First 50 units:** charged at Rs 0.50 per unit.
  - **Next 100 units (51-150):** charged at Rs 0.75 per unit.
  - **Next 100 units (151-250):** charged at Rs 1.20 per unit.
  - **Above 250 units:** charged at Rs 1.50 per unit.
  - Finally: Add $20\%$ surcharge: $\text{Total} = \text{Bill} + (\text{Bill} \times 0.20)$.
- **Example:**
  - Input: `120 units`
  - Processing:
    - First 50 units: $50 \times 0.50 = 25$
    - Next 70 units: $70 \times 0.75 = 52.5$
    - Base bill $= 25 + 52.5 = 77.5$
    - Surcharge ($20\%$): $77.5 \times 0.20 = 15.5$
    - Total $= 77.5 + 15.5 = 93.0$
  - Output: `Rs. 93.00`

---

### Program 6B2: Roots of a Quadratic Equation ($ax^2 + bx + c = 0$)
- **Goal:** Find real or complex roots.
- **Logic:**
  1. Calculate Discriminant: $D = b^2 - 4ac$.
  2. **If $D > 0$:** Two distinct real roots $\to \frac{-b \pm \sqrt{D}}{2a}$.
  3. **If $D == 0$:** Two equal real roots $\to \frac{-b}{2a}$.
  4. **If $D < 0$:** Imaginary roots $\to$ Real part $= \frac{-b}{2a}$, Imaginary part $= \frac{\sqrt{-D}}{2a}$.
- **Example:**
  - Input: $a = 1, b = -5, c = 6$
  - Processing: $D = (-5)^2 - 4(1)(6) = 25 - 24 = 1$ ($D > 0$)
  - Roots: $\frac{5 \pm 1}{2} \to 3$ and $2$
  - Output: `Roots are real: 3.00 and 2.00`

---

### Program 6B3: Triangle Classification by Sides
- **Goal:** Determine triangle geometry given sides $a, b, c$.
- **Logic:**
  1. If $a == b$ and $b == c \implies$ **Equilateral** (all 3 sides equal).
  2. Else if $a == b$ or $b == c$ or $a == c \implies$ **Isosceles** (any 2 sides equal).
  3. Else if $a^2 + b^2 == c^2$ or $b^2 + c^2 == a^2$ or $a^2 + c^2 == b^2 \implies$ **Right-Angled** (Pythagoras theorem holds).
  4. Else $\implies$ **Scalene** (all sides different).
- **Example:**
  - Input: `3, 4, 5`
  - Processing: $3^2 + 4^2 = 9 + 16 = 25 = 5^2 \implies$ Right-angled!
  - Output: `Right-Angled Triangle`

---

### Program 6C1: Second Largest of Three Numbers
- **Goal:** Find the middle/median value among three distinct numbers $A, B, C$.
- **Logic:**
  - If $A$ lies between $B$ and $C$ $\implies A$ is second largest.
  - Else if $B$ lies between $A$ and $C$ $\implies B$ is second largest.
  - Otherwise $\implies C$ is second largest.
- **Example:**
  - Input: $A = 10, B = 50, C = 30$
  - Processing: 30 lies between 10 and 50.
  - Output: `30 is the second largest`

---

### Program 6C2: RGB to CMYK Color Conversion
- **Goal:** Convert Red, Green, Blue colors into Cyan, Magenta, Yellow, Black (printer ink format).
- **Logic:**
  1. Scale RGB from $[0, 255]$ to $[0, 1]$ by dividing each by $255.0$.
  2. Find White $W = \max(R', G', B')$.
  3. Compute ink proportions:
     - $\text{Cyan} = (W - R') / W$
     - $\text{Magenta} = (W - G') / W$
     - $\text{Yellow} = (W - B') / W$
     - $\text{Black} (K) = 1 - W$
- **Example:**
  - Input: $R = 255, G = 255, B = 255$ (Pure White)
  - Processing: $W = 1.0 \implies C = 0, M = 0, Y = 0, K = 0$
  - Output: `C: 0.00, M: 0.00, Y: 0.00, K: 0.00`

---

## 3. Top Student Mistakes to Avoid
1. **Wrong Order in `else-if`:** Always test the strictest / highest conditions first when using `>=` (e.g., check $\ge 70$ before $\ge 35$).
2. **Missing Parentheses in Division:** Writing `-b + sqrt(d) / 2 * a` calculates wrong math! It must be `(-b + sqrt(d)) / (2 * a)`.
