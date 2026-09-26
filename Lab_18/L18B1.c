//generate fibonacci series using function
#include <stdio.h>

void fibbo(int n);

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    fibbo(n);
    return 0;
}

void fibbo(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}