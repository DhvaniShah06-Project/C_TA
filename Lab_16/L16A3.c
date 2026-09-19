// read and store roll marks 20 students
#include <stdio.h>
void main()
{
    int i, j;
    int a[20][20];
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nEnter Roll No. and Marks : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}