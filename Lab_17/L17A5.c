//store n elements in array and print using pointer
#include <stdio.h>
void main(){
    int n,*ptr,i;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    ptr=&a[0];
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}