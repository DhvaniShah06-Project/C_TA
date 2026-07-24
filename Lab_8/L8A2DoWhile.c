//odd from 1 to n using do while loop
#include <stdio.h>
void main(){
    int n,i=1;
    printf("Enter n : ");
    scanf("%d",&n);
    do{
        if(i%2!=0){
            printf("%d\n",i);
            i=i+1;
        }
        else{
            i=i+1;
        }
    }
    while(i<=n);
    }