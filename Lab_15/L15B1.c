//remove duplicate elements from array
#include <stdio.h>

int main() {
    int size, i, j, k = 0;

    printf("Enter Size : ");
    scanf("%d", &size);

    int a[size], b[size];

    for (i = 0; i < size; i++) {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++) {
        int isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            b[k] = a[i];
            k++;
        }
    }

    printf("Array after deleting duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
