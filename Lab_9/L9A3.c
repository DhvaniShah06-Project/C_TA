//power without power function
#include <stdio.h>
void main(){
int i=0,b,p,c=1;
printf("Enter base and power : ");
scanf("%d %d",&b,&p);
while(i<p){
c=c*b;
i=i+1;
}
printf("%d",c);
}

    

