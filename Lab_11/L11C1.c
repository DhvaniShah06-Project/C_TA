//swap first and last digit of number
#include <stdio.h>
#include <math.h>
void main(){
    int n,i=1,ld,temp,c,b,rev;
    printf("Enter n : ");
    scanf("%d",&n);
    temp=n;
if(n>=1&&n<=9){
    fd=0;
    ld=n;
    printf("%d",ld);
}
else{      
    ld=n%10; 
    while(n>=9){
n=n/10;
i=i+1;
    }  
  temp=temp/10; 
rev=pow(10,i-2);
 c=temp%rev; 
 b=(ld*(pow(10,i-1)))+(c*(pow(10,i-(i-1))))+n;
}
 printf("%d",b);           
}
   