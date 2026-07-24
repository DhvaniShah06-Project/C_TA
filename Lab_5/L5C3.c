// This program is for miultiply by 2 and divide by 2
#include "stdio.h"
void main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    a=a<<1;// left shift *2
    printf("a : %d",a);
    a=a>>2;// right shift /2
    printf("\na : %d",a);
}