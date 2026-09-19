// 2. Insert new value in the sorted array.
#include <stdio.h>

int main()
{
    int n, value, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size (n + 1) to accommodate the new element
    int arr[n + 1];

    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &value);

    // Step 1: Shift elements greater than 'value' one position to the right if the original array is 1,2,4,5 and new inserted 'value' is 3 then 4 and 5 are shifted 1 place to right.
    i = n - 1;
    while (i >= 0 && arr[i] > value)
    {
        arr[i + 1] = arr[i]; // Move element right
        i--;
    }

    // Step 2: Insert 'value' at its correct sorted position
    arr[i + 1] = value;

    // Step 3: Increase total element count
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}