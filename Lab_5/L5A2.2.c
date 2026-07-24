// swap no. with temp variablr
#include <stdio.h>
void main(){
    int a,b,temp;
    a=10;
    b=24;
    temp=a;
    a=b;
    b=temp;
    printf("a : %d b : %d",a,b);
}