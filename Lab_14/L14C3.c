
#include <stdio.h>
void main()
{
    int i, n, k=0, j;
    printf("Enter Size : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i==0||a[i]!=a[i-1]){
            a[k]=a[i];
            k++;
        }

    }
    printf("No. of Unique Elements : %d", k);
    printf("\n");
    for (i = 0; i < k; i++)
   {
        printf("%d ", a[i]);
    }
    printf("\n");
}