// This program is about conversion farenheit to celsius
#include <stdio.h>
void main(){
    float c,f;
    printf("enter value of f");
    scanf("%f",&f);
    c=(((f-32)*5)/9);
    printf("Celsius : %f",c);
}