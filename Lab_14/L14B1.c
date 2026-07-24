//numbers higher than average 
#include <stdio.h>
void main(){
    int n,sum=0,i,count=0;
    float Average;
    
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
       Average=(float)sum/n;
    printf("Average : %.2f",Average);
 
    for(i=0;i<n;i++){
        if(a[i]>Average){
            count=count+1;
        }
    }
    printf("\nNumbers Higher than Average : %d",count);
}