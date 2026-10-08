//pass array
#include <stdio.h>
void Array(int b[],int n);
void main(){
    int i,n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
printf("Enter Array Number : ");
scanf("%d",&a[i]);
    }
    Array(a,n);
}
void Array(int b[],int x){
    int i;
    for(i=0;i<x;i++){
        printf("%d ",b[i]);
    }
}