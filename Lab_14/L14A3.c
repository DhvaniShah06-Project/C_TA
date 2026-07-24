//count of even or odd
#include <stdio.h>
void main(){
    int n,Odd=0,Even=0,i;
    printf("How many Numbers : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            Even=Even+1;
        }
        else{
            Odd=Odd+1;
        }
    }
    printf("Even Numbers : %d\nOdd Numbers : %d",Even,Odd);
}