# Lab 16: 2D Arrays and Matrices

This lab is about **2D arrays**, also called **matrices**. A matrix is just a table of numbers arranged in **rows and columns**.

---

## 1. Simple Idea

Think of a matrix as a **table of numbers**.

A 1D array is like a single line of boxes:

```text
[10] [20] [30] [40]
```

A 2D array is like a **table with rows and columns**:

```text
1   2   3
4   5   6
7   8   9
```

This is a **3x3 matrix**:
- 3 rows
- 3 columns
- total 9 values

In C, we write it as:

```c
int a[3][3];
```

This means: we are creating a table with 3 rows and 3 columns.

Now, each value in the table is accessed as:

```c
a[i][j]
```

Here:
- `i` = row number
- `j` = column number

Example:

```c
int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

So:
- `a[0][0]` = 1
- `a[0][1]` = 2
- `a[1][2]` = 6
- `a[2][2]` = 9

This is easy to understand because a matrix is just a **group of values arranged in rows and columns**.

---

## 2. 3x3 Matrix Example

```c
#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value: ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

This is the basic concept of a 2D matrix.

---

## 3. One Line That Takes Rows and Columns from User

```c
int a[r][c];
```

This works when the user enters values first:

```c
int r, c;
printf("Enter rows and columns: ");
scanf("%d %d", &r, &c);
int a[r][c];
```

So the matrix size is not fixed; it depends on the user input.

---

## 4. Common Matrix Pattern

Most matrix programs use this pattern:

```c
for (i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
```

Then to print:

```c
for (i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
```

This is the main idea of Lab 16.

---

## 5. What Programs in This Lab Do

### 16A1: Read and Print a 3x3 Matrix
- Read 9 values
- Store them in `a[i][j]`
- Print them in rows and columns

### 16A2: Count Positive, Negative and Zero
- Check each element
- If value > 0: count positive
- If value < 0: count negative
- If value == 0: count zero

### 16A3: Store Roll Number and Marks
- Use a 2D array for student data
- Example: `a[20][2]`
- first column = roll number
- second column = marks

### 16A4: Add Two Matrices
- Add same-position values:

```c
add[i][j] = a[i][j] + b[i][j];
```

### 16B1: Transpose of a Matrix
- Swap rows and columns
- Example: 3x2 becomes 2x3

### 16B2: Matrix Multiplication
- Multiply row of first matrix with column of second matrix
- More difficult than addition

### 16B3: Check Sparse Matrix
- Count zeros and non-zero values
- If zeros are more than non-zero, it is sparse

### 16C1 and 16C2: Diagonal Elements and Sum
- For diagonal, use condition:

```c
if (i == j)
```
- Print and add diagonal values

---

## 6. Quick Rules to Remember

- 2D array = matrix
- `a[i][j]` = value at row `i`, column `j`
- Use nested loops for matrix work
- Indexing in C starts from 0
- For user input, set rows and columns first:

```c
scanf("%d %d", &r, &c);
int a[r][c];
```

---

## 7. Final Note

Matrix is one of the most important concepts in C programming. It helps us store data in a table form and process it easily. In Lab 16, you mainly learn how to read, print, and work with values in rows and columns.

A matrix is simply:

```text
many values arranged in rows and columns
```

And in C, we write it as:

```c
array[row][column]
```

That is the basic idea of Lab 16.
