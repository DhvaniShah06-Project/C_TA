//reverse
#include <stdio.h>
void main(){
    int n,sum=0,rem;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n!=0){
    int rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
    }
    printf("%d",sum);
}