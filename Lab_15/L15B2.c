//swap elements of array without using second array
#include <stdio.h>
void main(){
    int i,n,temp;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}