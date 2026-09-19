// multiplication of matrix
#include <stdio.h>
void main()
{
    int i, j, r, c;
    printf("Enter size of row and column : ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value of matrix a : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value of matrix b : ");
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix Multiplication\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int sum = 0, k;
            for (k = 0; k < r; k++)
            {
                sum = sum + a[k][j] * b[i][k];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
