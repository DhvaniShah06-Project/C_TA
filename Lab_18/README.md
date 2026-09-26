# C Functions - Easy Notes

## 1) What is a function?

A function is a block of code used to do one specific task.

Example idea:
- add two numbers
- find maximum value
- check prime number
- print Fibonacci series

A function keeps the program organized and reusable.

---

## 2) Function structure in C

The proper order is:
1. Declare function
2. Call function in `main()`
3. Define function after `main()`

### Simple example

```c
int add(int, int);

int main() {
    int result = add(5, 7);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
```

### Meaning
- declaration tells the compiler the function exists
- call executes the function
- definition tells what the function actually does

---

## 3) Add two numbers using function

A function can take two numbers and return their sum.

Example:
- input: 5 and 7
- work: add them
- output: 12

### How it runs step by step
1. `main()` passes 5 and 7 to the function.
2. Function receives them as parameters.
3. It calculates `5 + 7`.
4. It returns 12.
5. `main()` prints 12.

---

## 4) Find maximum and minimum between two numbers

A function can compare two values and return the greater or smaller one.

Example:
- values: 8 and 3
- max = 8
- min = 3

### How it runs step by step
1. Two values are passed into the function.
2. The function compares them.
3. If one is bigger, it returns that value.
4. The result is printed in `main()`.

---

## 5) Simple interest using function

The function calculates:

`SI = (P * R * T) / 100`

Example:
- P = 1000
- R = 5
- T = 2
- SI = 100

### How it runs step by step
1. `main()` passes principal, rate and time.
2. Function multiplies them.
3. Divides by 100.
4. Returns the final simple interest.

---

## 6) Maximum of three floating-point numbers

A function can compare three values and return the largest one.

Example:
- 2.5, 9.8, 7.1
- maximum = 9.8

### How it runs step by step
1. Three numbers are passed to the function.
2. It compares them pair by pair.
3. It keeps the largest one.
4. Returns the largest value.

---

## 7) Swap two numbers using function

There are two methods:
- call by value
- call by reference

### Call by value
The function receives copies of the values.

Example:
- a = 10, b = 20
- swapping inside function does not change original values

### Call by reference
The function receives addresses.

Example:
- `swap(&a, &b)`
- actual values in memory are changed
- result: `a = 20`, `b = 10`

### How it runs step by step
1. Use address of variables in reference method.
2. Function changes the values stored there.
3. Original values in `main()` change.

---

## 8) Fibonacci series using function

Fibonacci series starts as:
`0 1 1 2 3 5 8 ...`

### How it runs step by step
1. Start with two numbers: 0 and 1.
2. Print the first value.
3. Add both values and get the next number.
4. Repeat this until required count is reached.

---

## 9) Prime, Armstrong, and perfect number check

A function can check whether a number belongs to one or more categories.

Example:
- 153 is an Armstrong number
- 6 is a perfect number
- 7 is a prime number

### How it runs step by step
1. Function checks divisibility for prime.
2. Function checks sum of proper divisors for perfect.
3. Function checks digit power sum for Armstrong.
4. It prints whichever condition matches.

---

## 10) Print prime numbers between intervals

A function can test each number in a range and print only the primes.

Example:
- range: 10 to 30
- output: 11, 13, 17, 19, 23, 29

### How it runs step by step
1. Loop runs from starting value to ending value.
2. Each value is checked by `isPrime()`.
3. Only prime values are printed.

---

## 11) String functions using user-defined functions

A string is an array of characters.

A function can:
- find length
- copy string
- concatenate strings
- compare strings

Example:
- `hello` has length 5

### How it runs step by step
1. Function reads characters one by one.
2. It stops at the end character `\0`.
3. It counts how many characters were read.
4. Returns the length.

---

## 12) Amount to words using function

A function can convert a number like `9241` into words:

`Nine Thousand Two Hundred Forty One`

### How it runs step by step
1. Split the number into thousands, hundreds, tens, and ones.
2. Convert each part to words.
3. Print them together.

---

## 13) Very short rule

Function program =
- declare first
- call in `main()`
- define later

This is the basic rule for all user-defined function problems in C.
