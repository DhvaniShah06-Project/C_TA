// Print Matrix
#include <stdio.h>
void main()
{
    int i, j;
    int b[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a value : ");
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
}