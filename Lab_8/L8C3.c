// Division without using % or / operators
#include <stdio.h>

int main()
{
    float a, b, rem, q = 0;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    rem = a;
    while (rem >= b)
    {
        rem = rem - b;
        q = q + 1;
    }

    printf("REMAINDER : %.2f", rem);
    printf("\nQUOTIENT : %.2f", q);
    return 0;
}
