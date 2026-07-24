//This program prints odd number 
#include <stdio.h.>
void main(){
int i=1,n;
printf("Enter n : ");
scanf("%d",&n);
while(i<=n){
    if(i%2!=0){
        printf("%d is Odd Number\n",i);
        i=i+1;
    }
    else{
        i=i+1;
    }
}
}