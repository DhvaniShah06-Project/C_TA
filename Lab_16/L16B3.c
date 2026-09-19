// diagonal and its sum
#include <stdio.h>
int main()
{
    int i, j, r, c, sum = 0;
    printf("Enter size : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value for matrix a  : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nSum : %d", sum);
}