//Swap two numbers using call by reference
#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("a= %d b= %d", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}