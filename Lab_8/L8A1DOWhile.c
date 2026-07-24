// prints 1 to n using do hwile loop
#include<stdio.h>
void main(){
    int i=0,n;
    printf("Enter n : ");
    scanf("%d",&n);
    do{
        i=i+1;
        printf("%d\n",i);
    }
while(i<n);
    
}