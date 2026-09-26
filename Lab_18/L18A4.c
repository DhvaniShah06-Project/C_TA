//returns maximum from 3 float numbers
#include <stdio.h>

float max(float, float, float);

int main() {
    float a, b, c;
    printf("Enter an integer a : ");
    scanf("%f", &a);
    printf("Enter an integer b : ");
    scanf("%f", &b);
    printf("Enter an integer c : ");
    scanf("%f", &c);

    float result = max(a, b, c);
    printf("Maximum : %.1f", result);
    return 0;
}

float max(float a, float b, float c) {
    float great = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    return great;
}