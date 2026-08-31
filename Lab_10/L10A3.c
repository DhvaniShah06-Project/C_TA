// prime or not
#include <stdio.h>
void main()
{
    int n, i = 2, count = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            i++;
            count++;
            break;
        }
        i++;
    }
    if (count == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime number");
    }
}