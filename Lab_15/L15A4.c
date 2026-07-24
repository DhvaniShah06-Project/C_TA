//search element
#include <stdio.h>
void main(){
    int i,n,m,j,h,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    printf("How many Numbers to be searched : ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("Enter number : \n");
        scanf("%d",&h);
        for(j=0;j<n;j++){
            if(a[j]==h){
                printf("%d Is Found\n",h);
            }
            else{
                flag=1;
            }
        }
        if(flag==1)
        printf("%d Not Found",h);
    }  
}