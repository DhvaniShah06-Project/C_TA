// prime using flag variable
#include <stdio.h>
void main()
{
    int n, flag = 0, i = 2;
    printf("Enter n : ");
    scanf("%d", &n);
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            flag = 1;
            i = i + 1;
        }
        i = i + 1;
    }
    if (flag == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}
