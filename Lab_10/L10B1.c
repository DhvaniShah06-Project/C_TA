//perfect
#include <stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
    if(n%i==0){
    sum=sum+i;
    }    
    }
    if(n==sum){
    printf("Perfect Number");
    }
    else{
    printf("Not Perfect Number");
    }
}