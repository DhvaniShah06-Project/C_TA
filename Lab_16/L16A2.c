// count positive,-ve,zero
#include <stdio.h>
void main()
{
    int i, j, pc = 0, nc = 0, zc = 0;
    int a[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value : ");
            scanf("%d", &a[i][j]);
            if (a[i][j] > 0)
            {
                pc = pc + 1;
            }
            else if (a[i][j] < 0)
            {
                nc = nc + 1;
            }
            else
            {
                zc = zc + 1;
            }
        }
    }
    printf("Positive : %d\nNegative : %d\nZero : %d", pc, nc, zc);
}