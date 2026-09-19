// Transpose
#include <stdio.h>
void main()
{
    int i, j, m, n, r, c;
    printf("Enter size : ");
    scanf("%d %d", &r, &c);
    int a[r][c], t[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
