// palindrome
#include "stdio.h"
void main(){
    int n,rem,sum=0,temp;
    printf("Enter n : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
    rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
    }
    if(temp==sum){
    printf("%d is Palindrome Number",temp);
    }
    printf("%d is Not Palindrome Number",temp); 
}