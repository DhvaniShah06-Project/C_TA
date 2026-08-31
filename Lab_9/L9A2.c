// multiplication of table
#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("\n%d*%d = %d", n, i, n * i);
        i = i + 1;
    }
}