//divisible by 3
#include <stdio.h>
void main(){
    int i,n,count=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            count=count+1;
        }
    }
    printf("No's Divisible by 3 : %d",count);
}