//power
#include "stdio.h"
void main(){
    int i,b,p,c=1;
    printf("Enter b and p : ");
    scanf("%d %d",&b,&p);
    for(i=0;i<p;){
        c=b*c;
        i=i+1;
    }
    printf("%d^%d : %d",b,p,c);
}