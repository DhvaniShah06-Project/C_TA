// sum of series 1-2+3-4+5-6+7-8+...
#include <stdio.h>
#include <math.h>
void main()
{
    int n, i = 2, sum = 0, c, b = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        c = pow(-1,i-1) * b;
        sum += c;
        i += i;
    }
    printf("sum : %d", sum);
}