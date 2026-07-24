//sum of 1 to n numbers
#include<stdio.h>
void main(){
    int s=0,i=1,n;
    printf("Enter n : ");
    scanf("%d",&n);
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    printf("Sum : %d",s);
}