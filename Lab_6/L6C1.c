// 2nd greatest from three numbers
#include "stdio.h"
void main()
{
    int a, b, c;
    printf("Enter value of a,b and c : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c && b > c)
    {
        printf("%d is great", b);
    }
    else if (a > b && a > c && c > b)
    {
        printf("%d is great", c);
    }
    else if (b > c && b > a && a > c)
    {
        printf("%d is great", a);
    }
    else if (b > c && b > a && c > a)
    {
        printf("%d is great", c);
    }
    else if (c > a && c > b && a > b)
    {
        printf("%d is great", a);
    }
    else if (c > a && c > b && b > a)
    {
        printf("%d is great", b);
    }
}