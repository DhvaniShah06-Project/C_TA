//factorial using for loop
#include <stdio.h>
void main(){
    int n,sum=1,i;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;){
            sum=sum*i;
            i=i+1;
        }
    printf("Factorial of %d : %d",n,sum);
}