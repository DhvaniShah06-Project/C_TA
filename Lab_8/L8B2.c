// Prints n>100 && n<200 & n/7 n!/5
#include <stdio.h>
void main(){
    int i=1,a,n;//without a
    // printf("%d\n",n)
    while(i<99){ 
       n=100+i; 
       if(n%7==0 && n%5!=0){
        a=n;
        printf("%d\n",a);
       }
       i=i+1;
    }
}