//check whether a number is prime, armstrong or perfect using functions
#include <stdio.h>
#include <math.h>

int isPrime(int n);
int isPerfect(int n);
int countDigits(int n);
int isArmstrong(int n);
void check(int n);

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    check(n);
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

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = countDigits(n);

    while (n > 0) {
        int rem = n % 10;
        sum += (int)pow(rem, digits);
        n /= 10;
    }

    return sum == original;
}

void check(int n) {
    if (isPrime(n)) {
        printf("%d is Prime Number\n", n);
    }
    if (isPerfect(n)) {
        printf("%d is Perfect Number\n", n);
    }
    if (isArmstrong(n)) {
        printf("%d is Armstrong Number\n", n);
    }
    if (!isPrime(n) && !isPerfect(n) && !isArmstrong(n)) {
        printf("%d is neither Prime, nor Perfect, nor Armstrong\n", n);
    }
}
