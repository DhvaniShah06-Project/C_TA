#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        // Print leading spaces (0 for the first row, 1 for the second, etc.)
        for (k = 1; k <= (5 - i); k++)
        {
            printf(" ");
        }

        // Print stars followed by a space to create the centered effect
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
