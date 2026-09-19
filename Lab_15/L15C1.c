// 1. Find two largest elements in a one dimensional array.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first, second;

    // Step 1: Initialize 'first' and 'second' using the first two elements
    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }

    // Step 2: Compare the remaining elements starting from index 2
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first; // Old first max becomes the new second max
            first = arr[i]; // Update first max with the new larger number
        }
        else if (arr[i] > second)
        {
            second = arr[i]; // Update second max if element is between first and second
        }
    }

    printf("\nFirst Largest Element = %d\n", first);
    printf("Second Largest Element = %d\n", second);

    return 0;
}