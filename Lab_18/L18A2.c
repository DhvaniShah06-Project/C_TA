//maximum and minimum between two numbers
#include <stdio.h>

int max(int, int);
int min(int, int);

int main() {
    int a, b;
    printf("Enter an integer a : ");
    scanf("%d", &a);
    printf("Enter an integer b : ");
    scanf("%d", &b);

    int maxno = max(a, b);
    printf("Maximum : %d", maxno);

    int minno = min(a, b);
    printf("\nMinimum : %d", minno);
    return 0;
}

int max(int a, int b) {
    int great = (a > b) ? a : b;
    return great;
}

int min(int a, int b) {
    int small = (a > b) ? b : a;
    return small;
}