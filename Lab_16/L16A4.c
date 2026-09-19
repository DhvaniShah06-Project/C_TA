// Addition
#include <stdio.h>
void main()
{
    int i, j, m, n, k, l, r, c;
    printf("Enter size : ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], add[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value of matrix a : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (m = 0; m < r; m++)
    {
        for (n = 0; n < c; n++)
        {
            printf("Enter value of matrix b :");
            scanf("%d", &b[m][n]);
        }
    }
    //Just for printing both matrices can skip.
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf(" %d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (m = 0; m < r; m++)
    // {
    //     for (n = 0; n < c; n++)
    //     {
    //         printf(" %d ", b[m][n]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    for (i = 0, m = 0, k = 0; i < r, m < r, k < r; i++, m++, k++)
    {
        for (j = 0, n = 0, l = 0; j < c, n < c, l < c; j++, n++, l++)
        {
            add[k][l] = a[i][j] + b[m][n];
            printf("%d ", add[k][l]);
        }
        printf("\n");
    }
}