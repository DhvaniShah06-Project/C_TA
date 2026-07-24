// prints factorial
#include <stdio.h>
void main()
{
    int sum = 1, n, i = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    while (n >= i)
    {
        sum = sum * i;
        i = i + 1;
    }
    printf("Factorial : %d", sum);
}