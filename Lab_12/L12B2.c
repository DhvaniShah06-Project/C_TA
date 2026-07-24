// e=1/1!+1/2!+1/3!+...1/n!
#include <stdio.h>
void main()
{
    float n, sum = 1, i, s = 0, a = 1;
    printf("Enter n : ");
    scanf("%f", &n);
    for (i = 2; i <= n - 1; i++)
    {
        for (a = i; i >= 2; i--)
        {
            a = a * a - 1;
            printf("%d \n", a);
        }
        s = 1 / (a) + s;
    }

    printf("Value of e : %.2f", s + 1);
}