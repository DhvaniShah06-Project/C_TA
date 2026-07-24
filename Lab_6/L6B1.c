//electricity bill
#include<stdio.h>
void main(){
float e,p;
printf("Enter e : ");
scanf("%f",&e);
if(e<=50){
    p=0.50*e;
}
else if(e<=150){
    p=(0.75*e)+(e-50)*0.50;
}
else if(e<=250){
    p=(1.20*e)+((e-100)*0.75)+((e-200)*0.50);
}
else if(e>=250){
    p=(1.50*e)+((e-250)*1.20)+((e-100)*0.75)+((e-200)*0.50);
    }
    p=0.20*p;
    printf("Bill : %f",p);
}