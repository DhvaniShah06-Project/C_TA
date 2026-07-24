//sum,average,max,min
#include <stdio.h>
void main(){
    int n,i=0,sum=0,max,min,Average;
    printf("How Many Numbers : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    for(i=1;i<n;i++){
        (a[i]>max)?(max=a[i]):(max=max);
        (a[i]<min)?(min=a[i]):(min=min);
    }
    Average= sum/n;
    printf("Sum : %d",sum);
    printf("\nAverage : %d",Average);
    printf("\nMAXIMUM : %d",max);
    printf("\nMINIMUM : %d",min);
}