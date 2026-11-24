// calloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, sum = 0;
    int *p;
    printf("Enter n : ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &p[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    printf("Sum : %d", sum);
    free(p);
    return 0;
}
