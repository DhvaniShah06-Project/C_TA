// This program is about finding Simple interest using Scanf Fn
#include <stdio.h>
void main(){
    float p,roi,time,Si;
    printf("enter value of p");
    scanf("%f",&p);
    printf("enter valur of roi");
    scanf("%f",&roi);
    printf("enter value of time");
    scanf("%f",&time);
    Si=((roi*p*time)/100);
    printf("Simple Interest : %f",Si);
}