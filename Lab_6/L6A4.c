// This program is about identifying last digit of a number is odd or even
#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
   a=a%10;
   if(a%2==0){
    printf("a is even");
   }
   else{
    printf("a is odd");
   }
}