/*1. Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] ==
nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed). specifically, ans is the concatenation of two
nums arrays.
Return the array ans.
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]*/

#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
        *returnSize = 2 * numsSize;
    
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    if (ans == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
        
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];            
        ans[i + numsSize] = nums[i]; 
    }
    
    return ans;
}

int main() {
    int nums[] = {1, 2, 1};
    int numsSize = 3;
    int returnSize;
    
    int* result = getConcatenation(nums, numsSize, &returnSize);
    

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    free(result);
    
    return 0;
}
