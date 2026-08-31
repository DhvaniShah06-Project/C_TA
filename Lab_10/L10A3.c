//prime or not
#include <stdio.h>
void main(){
    int n,i=1,count=0;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>=i){
    if(n%i==0){
    i=i+1;
    count=count+1;
    }
    else{
    i=i+1;
    }
    }
    if(count==2){
    printf("Prime Number");
    }
    else{
    printf("Not Prime number");
    }   
}