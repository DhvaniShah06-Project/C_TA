// This program is about output of gross salary
#include <stdio.h>
void main(){
    float salary,HRA,DA,GS,c;
    printf("Enter value of salary : ");
    scanf("%f",&salary);
    c=salary;
if(c>=30000){
        HRA=(0.3*c);
        DA=(0.95*c);
        GS=HRA+DA+c;
           printf(" GS : %f",GS);
}
else if(c>=20000){
        HRA=(0.25*c);
        DA=(0.9*c);
        GS=HRA+DA+c;
           printf("GS : %f",GS);
}
     else if(c>=10000){
        HRA=(0.2*c);
        DA=(0.8*c);
        GS=HRA+DA+c;
           printf("GS : %f",GS);
    }
}
    