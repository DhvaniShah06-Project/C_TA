//Equality of two numbers using bitwiseoperator
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    (a&b)?(printf("Equal Number")):(printf("Not Equal"));
    // a-b==0 then also equal
    // also xor(^)
}