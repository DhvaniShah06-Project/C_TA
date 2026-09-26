//Find all prime numbers between given intervals
#include <stdio.h>

int isPrime(int n);
void Find(int a, int b);

int main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    Find(a, b);
    return 0;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void Find(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Prime numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

