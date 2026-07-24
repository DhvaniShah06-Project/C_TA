// missing number in sequence
#include <stdio.h>
void main()
{
    int n, i, j, count = 0;
    printf("Enter size : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    j = a[0];
      while (j <= a[n - 1]) 
    {
        if (a[i] == j)
        {
            i++;     
            j++;    
        }
        else
        {
            printf("%d ", j); 
            j++;              
        }
    }


}
