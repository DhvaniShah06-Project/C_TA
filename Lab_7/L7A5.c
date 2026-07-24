// This program gives odd or even using conditional operator
#include <stdio.h>
void main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    (a&1)?(printf("a is Odd")):(printf("a is Even"));
}