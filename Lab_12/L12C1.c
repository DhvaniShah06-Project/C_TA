// Pascal's Triangle
#include <stdio.h>

int main()
{
    int n, i, j, space, coef = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // Step 1: Print leading spaces to make a triangle shape
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        // Step 2: Print numbers in row 'i'
        for (j = 0; j <= i; j++)
        {
            // First element of every row is always 1
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                // Formula to find the next coefficient:
                // next = previous * (i - j + 1) / j
                coef = coef * (i - j + 1) / j;
            }

            printf("%d ", coef);
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}
