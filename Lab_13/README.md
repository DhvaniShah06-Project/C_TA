# Lab 13: Pattern Printing in C

This lab introduces students to basic pattern programs in C using nested loops, conditional statements, and printf formatting. The goal is to understand how loops control rows and columns and how changing loop conditions changes the shape of the printed output.

## Learning Objectives

- Understand the use of nested loops for pattern printing.
- Print symbols such as `*`, digits, and binary digits in different row formats.
- Practice controlling spaces, line breaks, and repetition count.
- Develop problem-solving skills by mapping a visual pattern to loop structure.

## Core Concepts

### 1. Nested Loops
A pattern is usually generated with two loops:
- The outer loop controls the number of rows.
- The inner loop controls the number of symbols printed in a row.

Example:
```c
for (i = 1; i <= 5; i++) {
    for (j = 1; j <= i; j++) {
        printf("*");
    }
    printf("\n");
}
```

Here:
- `i` represents the row number.
- `j` prints the star repeatedly for that row.

### 2. Conditional Logic
Some files use `if` and `else` to alternate between values such as `0` and `1`. This is useful for forming binary-style patterns.

### 3. Printing Spaces
Spaces are printed before or between characters to shift the pattern and make the figure centered or aligned on one side.

### 4. Output Formatting
Every row ends with `printf("\n")`, which moves the cursor to the next line.

## File Groups

The Lab 13 files are grouped as follows:

- `L13Aa.c` to `L13Ad.c`: basic star and number triangles.
- `L13Ba.c` to `L13Be.c`: more advanced patterns using number and character logic.

## Example: Step-by-Step Execution

Consider the following sample program from the Lab 13 pattern family:

```c
#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

### Execution Flow

1. Start with `i = 1`.
2. Inner loop runs from `j = 1` to `j = 1` and prints one `*`.
3. `printf("\n")` moves to the next line.
4. Now `i = 2`.
5. Inner loop prints `*` twice.
6. Continue until `i = 5`.
7. Final output:

```text
*
**
***
****
*****
```

## Pattern Interpretation

The pattern is a simple increasing triangle because:
- the row number increases from 1 to 5,
- the number of stars in each row increases from 1 to 5.

This shows how nested loops are used to create a row-by-row visual pattern.

## Common Debugging Tips

- Make sure the loop conditions are correct.
- Use `return 0;` at the end of `main()`.
- Check that `printf("\n")` is used to move to the next line.
- Initialize variables before using them in conditional decisions.

## Summary

Lab 13 focuses on reading problem patterns, identifying the row and column relationship, and converting that relationship into nested loops. The essential skill is deciding which loop controls the row, which loop controls the printed symbol count, and how spacing or conditions change the final visual shape.
