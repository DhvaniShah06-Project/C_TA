//digits of given number
#include<stdio.h>
void main(){
    int n,rem,sum=0,i;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n!=0){
    int rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
    }
    while(sum!=0){
    i=sum%10;
    printf("%d ",i);
    sum=sum/10;
    }
    }
