// This program is for add,subtract,multiply,divide of two numbers using switch case
// Switch case is for integer and character
#include <stdio.h>
void main(){
    int n;
    printf("Ente 1 for Addition""\nEnter 2 for Subtraction""\nEnter 3 for Multiplication""\nEnter 4 for Division");
    printf("\nEnter n : ");
    scanf("%d",&n);
    switch(n){
         case 1:
        {float a,b,Result;
        printf("Enter a : ");
        scanf("%f",&a);
        printf("Enter b : ");
        scanf("%f",&b);
        printf("Result : %.1f",a+b);
        break;}
        case 2:
        {float a,b,Result;
        printf("Enter a : ");
        scanf("%f",&a);
        printf("Enter b : ");
        scanf("%f",&b);
        printf("Result : %.1f",a-b);
        break;}
        case 3:
       {float a,b,Result;
       printf("Enter a : ");
       scanf("%f",&a);
       printf("Enter b : ");
       scanf("%f",&b);
       printf("Result : %.1f",a*b);
       break;}
       case 4:
       {float a,b,Result;
       printf("Enter a : ");
       scanf("%f",&a);
       printf("Enter b : ");
       scanf("%f",&b);
       printf("Result : %.3f",a/b);
       break;}
       default: printf("Enter value of n from 1 to 4");
    }      
    }
