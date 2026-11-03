/*Write following programs in C.
You are given a string s, which contains stars *.
In one operation, you can:
Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself. Return the string after all
stars have been removed.
Note:
The input will be generated such that the operation is always possible. It can be shown that the resulting
string will always be unique*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeStars(char* s) {
    int len = strlen(s);
    char* ans = (char*)malloc((len + 1) * sizeof(char));
    if (ans == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    int j = 0;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '*') {
        
            if (j > 0) {
                j--;
            }
        } else {
            ans[j] = s[i];
            j++;
        }
    }
    
    ans[j] = '\0';
    return ans;
}

int main() {
    char input1[] = "leet**cod*e";
    char input2[] = "erase*****";

    char* result1 = removeStars(input1);
    printf("Input: %s -> Output: %s\n", input1, result1);
    free(result1);

    char* result2 = removeStars(input2);
    printf("Input: %s -> Output: %s\n", input2, result2);
    free(result2); 

    return 0;
}
