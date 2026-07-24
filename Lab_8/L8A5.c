//count of odd and even
#include <stdio.h>
void main(){
   int n,i=0,counto=0,counte=0;
printf("Enter 10 numbers as per your choice : ")
   while(i<=9){
    printf("Enter no. : ");
    scanf("%d",&n);
    if(n%2==0){
        counte=counte+1;
    }
    else{
        counto=counto+1;
    }
    i=i+1;
   }
    printf("Count of Odd Number : %d",counto);
    printf("\nCount of Even Number : %d",counte);
   
}


















