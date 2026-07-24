 
 #include<stdio.h>
 void main(){
    int n,count=0,i=1,sum=0,a;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>count){
    a=i*i;
    sum=sum+a;
    count=count+1;
    i=i+1;
    }
    printf("Sum of Series : %d",sum);
 }