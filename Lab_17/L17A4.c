//swap two numbers using pointers
#include <stdio.h>
void main(){
    int a,b,*p1,*p2,temp;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",*p1,*p2);
}