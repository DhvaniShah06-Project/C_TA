//calculate simple interest
#include <stdio.h>

float Int(float, float, float);

int main() {
    float p, r, t;
    printf("Enter Principal Amount : ");
    scanf("%f", &p);
    printf("Enter Rate of Interest : ");
    scanf("%f", &r);
    printf("Enter Time : ");
    scanf("%f", &t);

    float Result = Int(p, r, t);
    printf("Simple Interset : %.3f", Result);
    return 0;
}

float Int(float p, float r, float t) {
    float Simple = (p * r * t) / 100;
    return Simple;
}