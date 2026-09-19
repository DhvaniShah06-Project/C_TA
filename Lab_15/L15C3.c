/*3. Given an integer array nums and an integer val, remove all occurrences of val in nums inplace. The order
of the elements may be changed. Then return the number of elements in nums which are not equal to
val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to
do the following things:
Change the array nums such that the first k elements of nums contain the elements which are not equal
to val. The remaining elements of nums are not important as well as the size of nums.
Return k. */

#include <stdio.h>

int main()
{
    int n, val;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    // Variable 'k' keeps track of the position for valid (non-val) elements
    int k = 0;

    // Loop through all elements in the array
    for (int i = 0; i < n; i++)
    {
        // If current element is NOT equal to val, keep it
        if (nums[i] != val)
        {
            nums[k] = nums[i]; // Store valid element at index 'k'
            k++;               // Move 'k' to the next slot
        }
    }

    // Output the results
    printf("\nNumber of elements not equal to %d (k) = %d\n", val, k);
    printf("Array after removal (first %d elements):\n", k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}