/*3. Given  an  integer  array  nums  sorted  in  non-decreasing  order,  remove  the  duplicates  inplace  such  that
each unique element appears only once. The relative order of the elements should be kept the same.
Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following
things:
Change the array nums such that the ƒrst k elements of nums contain the unique elements in the order
they were present in nums initially. The remaining elements of nums are not important as well as the
size of nums.
Return k. */
#include <stdio.h>
void main()
{
    int i, n, k = 0, j;
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
        if (i == 0 || a[i] != a[i - 1])
        {
            a[k] = a[i];
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