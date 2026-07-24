// sum of square and average with last digit 9
#include<stdio.h>
void main(){
    int a=1,i=1,sum=0,count=0,number=0;
while(count<10){
    if(a%10==9){
    sum=a+sum;
    count=count+1;
    number=number+1;  
    }
i=i+1;
a=i*i;
count=count+1;
}
printf("SUM     : %d",sum);
printf("\nAVERAGE : %d",(sum/number));
}