// This program prints no. of days with leap year
#include "stdio.h"
void main(){
    int a,b;
    printf("Enter year : ");
    scanf("%d",&b);
    printf("\nEnter a from 1 to 12");
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
    (b%100!=0&&b%4==0||b%400==0)?(printf("29 Days")):(printf("28 Days"));
    default: printf("Enter a between 1 to 12");
    }
}
        
    
    
        
    
    
     
