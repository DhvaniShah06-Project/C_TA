// sum of first and last digit
#include<stdio.h>
void main(){
    int n,sum=0,reverse,num;
    printf("Enter n : ");
    scanf("%d",&n);
    int rem=n%10;
    while(n!=0){
    int num=n%10;
    sum=(sum*10)+num;
    n=n/10;
    }
   reverse=sum%10;
   printf("%d",reverse+rem);
    }
