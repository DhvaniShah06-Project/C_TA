// Total negative numbers in an array
#include <stdio.h>
void main()
{
    int i, n, count = 0;
    printf("Enter size : ");
    scanf("%d", &n);
    int a[i];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count = count + 1;
        }
    }
    printf("Total Negative Elements : %d", count);
}