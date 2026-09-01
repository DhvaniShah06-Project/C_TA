// power
#include "stdio.h"
void main()
{
    int i, b, p, res = 1;
    printf("Enter b and p : ");
    scanf("%d %d", &b, &p);
    for (i = 0; i < p; i++)
    {
        res = b * res;
        i = i + 1;
    }
    printf("%d^%d : %d", b, p, res);
}