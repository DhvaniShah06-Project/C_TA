// This program is about finding odd or even without %operator
#include <stdio.h>
void main(){
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    (a&1)?(printf("a is odd")):(printf("a is even"));
}