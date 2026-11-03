//calloc
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    int *p;
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    int i,sum=0;
    for(i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
sum=sum+*(p+i);
    }
    printf("Sum : %d",sum);
}
