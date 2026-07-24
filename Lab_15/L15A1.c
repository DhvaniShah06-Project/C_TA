//copy elements
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
      printf("Enter Number : ");
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}