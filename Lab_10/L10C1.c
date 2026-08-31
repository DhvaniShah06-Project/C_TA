// number is armstrong or not
//  153=1*1*1+5*5*5+3*3*3 bcs number of digits is three
#include <stdio.h>
#include <math.h>
void main()
{
    int rem, temp, n, digits = 0, i = 0, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        n = n / 10;
        digits++;
    }

    n = temp;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, digits);
        n = n / 10;
        i = i + 1;
    }

    if (temp == sum)

        printf("%d is Armstrong Number", sum);
    else
    {
        printf("%d is not Armstrong Number", temp);
    }
}
