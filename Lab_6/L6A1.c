// This program gives add,sub,multiply,divide by taking input from user
#include <stdio.h>
void main(){
    float a,b,c;  
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Operator : ");
    scanf("%f",&c);

    printf(" Enter value of a : ");
    printf(" Enter value of b : ");
    scanf("%f %f",&a,&b);
    
    if(c==1){
    printf("a+b : %f",a+b);
    }
    if(c==2){    
    printf("a-b : %f",a-b);
    }
     if(c==3){
     printf("a*b : %f",a*b);
     }
     if (c==4){
    printf("a/b : %f",a/b);
     }
    }