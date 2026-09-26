#include <stdio.h>
void main(){
    int a=10,*i;
    char c='a',*C;
    float f=0.5,*F;
    double d=32.56,*D;
    i=&a;
    C=&c;
F=&f;
D=&d;
printf("%d %d %d %d",i,C,F,D);
}