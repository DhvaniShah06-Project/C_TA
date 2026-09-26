//prints value and address
#include <stdio.h>
void main(){
    int *ptr,a;
    printf("Enter number : ");
    ptr=&a;
    printf("%d %d",*ptr,ptr);
    
}