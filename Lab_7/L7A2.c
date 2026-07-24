// This program gives  no. of days in a month using switch case
// switch case is for integer and character data types

#include "stdio.h"
void main(){
    int a;
    printf("Enter value of a from 1 to 12 ");
    printf("\nEnter a : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 Days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 Days");
    break;

    case 2:
    printf("28 Days");
    default: printf("PLEASE ENTER VALUE FROM 1 TO 12");
    }

    
}