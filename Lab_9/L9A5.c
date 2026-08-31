// prints factors
#include <stdio.h>
void main()
{
    int n, i = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        i = i + 1;
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
}