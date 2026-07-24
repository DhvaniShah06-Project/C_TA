// division without % / operator
#include <stdio.h>
void main(){
float a,b,rem,q=0;
printf("Enter a : ");
scanf("%f",&a);
printf("Enter b : ");
scanf("%f",&b);
if(a>b){
rem=a-b;
q=q+1;
while(rem>=b){
rem=rem-b;
q=q+1;
}
}
else if(b>a){
rem=b-a;
q=q+1;
while(rem>=a){
rem=rem-a;
q=q+1;
}
} // a*q+rem=b ||b*q+rem=a
else if(a==b){
q=1;
rem=0;
}
printf("REMAINDER : %.2f",rem);
printf("\nQUOTIENT : %.2f",q);
}

