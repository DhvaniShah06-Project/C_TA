//sum &average as per user wants
#include <stdio.h>
void main(){
    float n,i=0,count,sum=0;
    printf("Enter numbers : ");   // we can ask user to print okay at end
    scanf("%f",&count);
    while(count>i){
    printf("Enter n : ");
    scanf("%f",&n);
    i=++;
    sum=sum+n;
    }
    printf("Addition : %.1f",sum);
    printf("\nAverage : %.2f",sum/i);
}