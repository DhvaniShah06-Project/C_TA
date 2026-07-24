#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    printf("Enter size : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        int duplicateFound = 0;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                duplicateFound = 1;
                break;
            }
        }
        // Check if already counted before
        int alreadyCounted = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (duplicateFound && !alreadyCounted) {
            count++;
        }
    }

    printf("Duplicate Elements : %d\n", count);
    return 0;
}