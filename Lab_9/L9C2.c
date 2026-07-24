// converts number to binary
#include <stdio.h>
void main()
{
    int n, i = 0, sum = 0, rem;
    printf("Enter n : ");
    scanf("%d", &n);
    while (n != 0)
    {
        i = n % 2;
        printf("%d", i);
        n = n / 2;
    }
}