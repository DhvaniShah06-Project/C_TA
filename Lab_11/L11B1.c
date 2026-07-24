// prints fibonaci series 0112358 0+1 1   1+1 2   1+2 3    2+3 5  5+3 8   8+5 13
#include <stdio.h>
void main()
{
    int n, i = 0, c, a = 0, b = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}