// prints ap series 1,4,7,10 up to 50 terms
#include <stdio.h>
void main(){
    int a=1,i=0;
    while(i<=49){
        printf("%d ",a);
        a=a+3;
        i=i+1;
    }
}