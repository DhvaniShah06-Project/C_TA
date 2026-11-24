/* Given an integer array nums of length n, create an array ans of length 2n
   where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n. */

#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize);

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);


    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed for nums!\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }


    int* result = getConcatenation(nums, n);
    if (result == NULL) {
        free(nums);
        return 1;
    }

    // Print 2 * n elements
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free both dynamically allocated arrays
    free(nums);
    free(result);

    return 0;
}

int* getConcatenation(int* nums, int numsSize) {
    // Allocate memory for 2 * numsSize integers
    int* ans = (int*)malloc(2 * numsSize * sizeof(int));
    if (ans == NULL) {
        printf("Memory allocation failed for ans!\n");
        return NULL;
    }

    // Copy nums into first half and second half of ans
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    //can use 2 loops to copy the elements of nums into ans, but using a single loop is more efficient and concise.
    /* arr=[1,2,1]
    2 loops for answer:
    loop 1 from i=0 to i<n answer array = [1,2,1]
    for(int i = 0; i < n; i++) {
        ans[i] = nums[i];
    }
    // loop 2 from i=n to i<2*n answer array = [1,2,1,1,2,1]
    for(int i = n; i < 2 * n; i++) {
        ans[i] = nums[i - n];
    }
    */

    return ans;
}