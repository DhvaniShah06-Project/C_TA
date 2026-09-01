// factorial using for loop
#include <stdio.h>
void main()
{
    int n, sum = 1, i;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    printf("Factorial of %d : %d", n, sum);
}