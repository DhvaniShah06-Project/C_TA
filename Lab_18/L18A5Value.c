#include <stdio.h>

void swap(int x, int y); // Function prototype

int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    swap(a, b); // function call
    return 0;
}

// function definition
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a = %d b = %d", x, y);
}