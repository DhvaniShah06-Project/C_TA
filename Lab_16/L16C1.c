// sparse or not sparse is maximum no. of zero elements
#include <stdio.h>
void main()
{
    int i, j, row, col, count = 0, flag = 0;
    printf("Entetr rows and Columns : ");
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter Number : ");
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count = count + 1;
            }
            else if (a[i][j] != 0)
            {
                flag = flag + 1;
            }
        }
    }
    if (count > flag)
    {
        printf("Matrix is Sparse Matrix");
    }
    else
    {
        printf("Matrix is not Sparse Matrix");
    }
}