// This program multiplies largest from 1st two and multiplies to third
#include <stdio.h>
void main(){
    int a,b,c,p;
    printf("Enter a : ");
    scanf("%d",&a);
     printf("Enter b : ");
    scanf("%d",&b);
     printf("Enter c : ");
    scanf("%d",&c);
    (a>b)?(p=a*c):(p=b*c);
    printf("Answer : %d",p);
}