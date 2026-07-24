//power without power fn and without multiplication
#include <stdio.h>
void main(){
    int b,p,i,c=1,d=0;
    printf("Enter base and power : ");
    scanf("%d %d",&b,&p);
       for(i=0;i<p;i++){
        c=c*b;
       }
       printf("%d^%d : %d",b,p,c);
}