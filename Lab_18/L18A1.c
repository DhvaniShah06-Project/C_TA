// add two numbers using functions
#include <stdio.h>

// function prototype
int add(int, int);
void main()
{
    int a, b;
    printf("Enter an integer a : ");
    scanf("%d", &a);
    printf("Enter an integer b : ");
    scanf("%d", &b);
    int result = add(a, b); // function call
    printf("Sum : %d", result);
}

// function definition
int add(int a, int b)
{
    int z = a + b;
    return z;
}