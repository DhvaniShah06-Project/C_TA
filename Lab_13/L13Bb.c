// 1 01 010 1010 10101
#include <stdio.h>

int main(void)
{
    int i, j, m = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (m == 0)
            {
                printf("1 ");
                m = 1;
            }
            else
            {
                printf("0 ");
                m = 0;
            }
        }
        printf("\n");
    }
    return 0;
}