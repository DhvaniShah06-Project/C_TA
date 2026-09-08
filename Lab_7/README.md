# Lab 7: `switch-case` and Conditional (Ternary) Operator (`?:`)

Welcome to **Lab 7**! This lab covers two concise branching tools in C:
1. **`switch-case`**: A clean way to build menus and choose between integer or character options.
2. **Conditional Operator (`?:`)**: A one-line shorthand for simple `if-else` decisions.

---

## 1. Core Concepts in Simple Words

### 1.1 `switch-case` Rules
- Evaluates **only integers or characters** (no floats allowed!).
- Cases must be fixed constants (like `case 1:` or `case 'A':`).
- **`break;`** is mandatory after each case, or execution will "fall through" into the next case!
- **`default:`** is the optional safety net (runs if no case matched).

### 1.2 The Ternary Operator (`?:`)
Syntax: `(condition) ? (value_if_true) : (value_if_false);`
- Example: `max = (a > b) ? a : b;`

---

## 2. Program-by-Program Logic & Examples

---

### Program 7A1: Day of the Week
- **Goal:** Display day name for numbers 1 to 7.
- **Logic:**
  1. Read day number (1 to 7).
  2. `switch(day)`:
     - Case 1 $\to$ "Monday", Case 2 $\to$ "Tuesday", ..., Case 7 $\to$ "Sunday".
     - Default $\to$ "Invalid day".
- **Example:**
  - Input: `5` $\to$ Output: `Friday`

---

### Program 7A2: Days in a Month (Using Fall-Through)
- **Goal:** Print total days in a month without writing repetitive code.
- **Logic:**
  - Group months with 31 days together without `break`: cases 1, 3, 5, 7, 8, 10, 12 all fall through into one single print statement!
  - Group months with 30 days: cases 4, 6, 9, 11 print "30 Days".
  - Case 2 (February): prints "28 or 29 Days".
- **Example:**
  - Input: `8` (August) $\to$ Falls into 31-day block $\to$ Output: `31 Days`

---

### Program 7A3: Menu-Driven Calculator
- **Goal:** Perform math using `switch` on operator character.
- **Logic:**
  1. Read two numbers and an operator character (`+`, `-`, `*`, `/`).
  2. `switch(op)`:
     - `case '+':` print sum.
     - `case '-':` print difference.
     - `case '*':` print product.
     - `case '/':` check division by zero, then print quotient.
- **Example:**
  - Input: `10 4` with operator `*`
  - Output: `Result = 40.00`

---

### Program 7A4: Largest of Three Numbers using Ternary (`?:`)
- **Goal:** Find maximum among $A$, $B$, $C$ in a single line.
- **Logic:**
  - If $A > B$: test $A$ against $C$ $\to$ `(a > c ? a : c)`.
  - Else: test $B$ against $C$ $\to$ `(b > c ? b : c)`.
  - Combined: `max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);`
- **Example:**
  - Input: $A = 12, B = 45, C = 23$
  - Since $A > B$ is false, it evaluates $(B > C ? B : C) \to 45$.
  - Output: `Largest = 45`

---

### Program 7A5: Odd or Even using Ternary (`?:`)
- **Goal:** Print odd or even without writing a full `if-else` block.
- **Logic:**
  - `(num % 2 == 0) ? printf("Even\n") : printf("Odd\n");`
- **Example:**
  - Input: `17` $\to$ Remainder is not zero $\to$ Output: `Odd`

---

### Program 7B1: Largest of First Two Multiplied by Third
- **Goal:** Pick largest between $A$ and $B$, then multiply by $C$.
- **Logic:**
  - Use ternary to pick winner between $A$ and $B$: `(a > b ? a : b)`.
  - Multiply winner by $C$: `result = ((a > b) ? a : b) * c;`
- **Example:**
  - Input: $A = 7, B = 4, C = 3$
  - Processing: Largest of $(7, 4)$ is $7$. Then $7 \times 3 = 21$.
  - Output: `Result = 21`

---

### Program 7B2: Check if Character is an Alphabet using `?:`
- **Goal:** Identify letters using the conditional operator.
- **Logic:**
  - Check if character falls in `'a'`-`'z'` or `'A'`-`'Z'`.
  - Expression: `((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "Alphabet" : "Not Alphabet"`
- **Example:**
  - Input: `'k'` $\to$ Output: `Alphabet`
  - Input: `'#'` $\to$ Output: `Not an Alphabet`

---

### Program 7C1: Check Equality WITHOUT `==` using XOR (`^`)
- **Goal:** Check if two numbers are equal without using the equality operator.
- **Logic:**
  1. The Bitwise XOR operator (`^`) compares binary bits.
  2. If two numbers are identical, every bit matches $\implies A \oplus B = 0$.
  3. If they differ, $A \oplus B \ne 0$.
  4. In C, `!(a ^ b)` evaluates to **1 (TRUE)** when they are equal!
- **Example:**
  - Input: $A = 25, B = 25$
  - Processing: $25 \oplus 25 = 0 \implies !(0) = 1$ (True).
  - Output: `Numbers are Equal`

---

### Program 7C2: Days in Month Accounting for Leap Year
- **Goal:** Output correct days including February in leap years.
- **Logic:**
  - For months with 31 or 30 days $\to$ standard switch cases.
  - For February (month 2) $\to$ check leap year rule:
    - Year is divisible by 400, OR divisible by 4 and not by 100.
    - If Leap Year $\to$ `29 Days`.
    - Else $\to$ `28 Days`.
- **Example:**
  - Input: Month `2`, Year `2024` $\to$ Leap year $\to$ Output: `29 Days`
  - Input: Month `2`, Year `2023` $\to$ Output: `28 Days`

---

## 3. Top Student Mistakes to Avoid
1. **Forgetting `break;` in `switch`:** Causes unwanted execution of all cases below!
2. **Using floating-point variables in `switch`:** `switch(3.14)` is illegal in C.
3. **Over-nesting ternary operators:** Writing 3 or 4 nested ternary conditions makes code unreadable; use `if-else` for complex logic.
