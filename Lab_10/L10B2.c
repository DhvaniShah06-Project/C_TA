//prime using flag variable
#include <stdio.h>
void main(){
    int n,flag=0,i=1;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>=i){
    if(n%i==0){
    flag=flag+1;
    i=i+1;
    }
    i=i+1;
    }
    if(flag==2){
    printf("Prime Number");
    }
   else if(flag>2){
    printf("Not Prime Number");
    }
}
    
