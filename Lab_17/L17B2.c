//swap two array using pointers
#include <stdio.h>
void main(){
    int n,*ptr1,*ptr2,i;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter Number for array 1 : ");
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("Enter Number for array 2 : ");
            scanf("%d",&b[i]);
    }
    ptr1=&a[0];
    ptr2=&b[0];
printf("Array 1\n");
for(i=0;i<n;i++){
    printf("%d ",*(ptr2+i));
}
printf("\nArray 2\n");
for(i=0;i<n;i++){
    printf("%d ",*(ptr1+i));
}
}