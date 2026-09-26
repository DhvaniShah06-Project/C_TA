//calculate sum of two numbers using pointers
#include <stdio.h>
void main(){
    int a,b;
    int *p1,*p2;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf ("%d+%d=%d",*p1,*p2,*p1+*p2);
}