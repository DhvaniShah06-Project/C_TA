// This program prints number divisible by 2 bwn given two numbers
#include"stdio.h"
void main(){
    int a,b,i=1;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    while(a<b){//a<=b also consider number b 


        if(a%2==0){
            printf("%d is divisible by 2\n",a);
            a=a+1;
        }
        else{
            a=a+1;
        }
    
    }
}