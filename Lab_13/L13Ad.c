#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        // Print leading spaces
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        // Print the number followed by a space
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
