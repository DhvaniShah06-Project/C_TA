# Pointers in C - Easy Notes

## 1) Basic idea

A pointer is a variable that stores the address of another variable.


Example:

```c
int x = 10;
int *p = &x;
- `x` stores a value
- `&x` gives the address of `x`
- `p` stores that address
- `*p` gives the value stored at that address
```

### Step-by-step execution
1. `x` is created and stored as 10.
2. `&x` gives the memory location of `x`.
3. `p = &x` means pointer `p` points to `x`.
4. `*p` means “go to that memory location and read the value”.
5. So `*p` is 10.

---

## 2) Example: print value and address of a variable

```c
int a = 25;
int *ptr = &a;

printf("Value = %d\n", a);
printf("Value by pointer = %d\n", *ptr);
printf("Address = %p\n", (void*)&a);
```

### Step-by-step execution
1. `a` is assigned 25.
2. `ptr` gets address of `a` using `&a`.
3. `a` prints 25 directly.
4. `*ptr` reads value from address stored in `ptr` → 25.
5. `&a` prints the memory address of `a`.

---

## 3) Example: int, float, double and char pointer

```c
int i = 10;
float f = 5.5;
double d = 12.75;
char c = 'A';

int *ip = &i;
float *fp = &f;
double *dp = &d;
char *cp = &c;
```

### Step-by-step execution
1. Each variable gets its own value.
2. Each pointer gets the address of its matching variable.
3. `ip` points to `i`, `fp` points to `f`, `dp` points to `d`, `cp` points to `c`.
4. So each pointer reads the correct type of value.

---

## 4) Example: sum of two numbers using pointers

```c
int a = 12, b = 8;
int *p1 = &a;
int *p2 = &b;

printf("%d", *p1 + *p2);
```

### Step-by-step execution
1. `p1` stores address of `a`.
2. `p2` stores address of `b`.
3. `*p1` gives 12.
4. `*p2` gives 8.
5. Add them: 12 + 8 = 20.
6. Output is 20.

---

## 5) Example: swap two numbers using pointers

```c
int a = 10, b = 20, temp;
int *p1 = &a;
int *p2 = &b;

temp = *p1;
*p1 = *p2;
*p2 = temp;
```

### Step-by-step execution
1. `temp = *p1` stores value of `a` in temp.
2. `*p1 = *p2` makes `a = b`.
3. `*p2 = temp` makes `b = old a`.
4. Final result: `a = 20`, `b = 10`.

---

## 6) Example: store n elements in an array and print using pointer

```c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;

printf("%d %d %d", *(p+0), *(p+1), *(p+2));
```

### Step-by-step execution
1. `p` points to first element of array.
2. `p + 0` means first element.
3. `p + 1` means second element.
4. `p + 2` means third element.
5. So pointer helps access array elements easily.

---

## 7) Example: copy one array to another using pointers

```c
int a[3] = {1, 2, 3};
int b[3];
int *p1 = a;
int *p2 = b;

for (i = 0; i < 3; i++) {
    *(p2 + i) = *(p1 + i);
}
```

### Step-by-step execution
1. `p1` points to `a[0]`.
2. `p2` points to `b[0]`.
3. Loop runs 3 times.
4. Each time, value from `a[i]` is copied into `b[i]`.
5. At the end, both arrays have same values.

---

## 8) Example: swap two arrays using pointers

```c
int a[3] = {1, 2, 3};
int b[3] = {4, 5, 6};
int temp;

for (i = 0; i < 3; i++) {
    temp = *(a + i);
    *(a + i) = *(b + i);
    *(b + i) = temp;
}
```

### Step-by-step execution
1. For each index, store value from `a[i]` in temp.
2. Replace `a[i]` with `b[i]`.
3. Replace `b[i]` with old `a[i]`.
4. Repeat for all positions.
5. Arrays are swapped element by element.

---

## 9) Example: add two matrices using pointers

```c
int a[2][2] = {{1,2},{3,4}};
int b[2][2] = {{5,6},{7,8}};
int c[2][2];

c[i][j] = a[i][j] + b[i][j];
```

### Step-by-step execution
1. Pick one position like `a[0][0]`.
2. Add with `b[0][0]`.
3. Store result in `c[0][0]`.
4. Repeat for every cell of matrix.
5. Final matrix contains the sum of both matrices.

---

## 10) Example: find length of a string using pointers

```c
char str[] = "hello";
char *p = str;
int count = 0;

while (*p != '\0') {
    count++;
    p++;
}
```

### Step-by-step execution
1. `p` starts at first character `'h'`.
2. Check whether current character is `\0`.
3. If not, increase count and move pointer to next character.
4. Continue until end of string is reached.
5. Count becomes 5.

---

## 11) Example: sort an array using pointers

```c
int arr[5] = {5, 2, 9, 1, 7};
int temp;

for (i = 0; i < 5; i++) {
    for (j = i + 1; j < 5; j++) {
        if (*(arr + i) > *(arr + j)) {
            temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }
}
```

### Step-by-step execution
1. Compare first element with next ones.
2. If smaller value is found, swap them.
3. Repeat this for all elements.
4. After multiple passes, array becomes sorted.

---

## 12) Important rules

- `&` gives address
- `*` gives value from address
- pointer type must match variable type
- pointer arithmetic works with arrays
- pointer helps in swapping, copying, and scanning data

---

## 13) Final simple summary

Pointers are used to store addresses so that we can access values indirectly.

- `a` = value
- `&a` = address
- `ptr` = address holder
- `*ptr` = value at that address

This is why pointers are very useful in C programming.
