// sum 1 to n
#include <stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;){
        sum=sum+i;
        i=i+1;
    }
    printf("Sum : %d",sum);
}