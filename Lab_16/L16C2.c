// prints Upper Triangular Matrix
#include <stdio.h>
void main()
{
    int i, j, row, col;
    printf("Enter Rows and columns : ");
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                a[i][j] = 0;
            }
            else if (i < j || i == j)
            {
                printf("Enter Number : ");
                scanf("%d", &a[i][j]);
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                printf("%d", a[i][j]);
            }
            else if (i < j || i == j)
            {
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }
}
