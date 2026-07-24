// check count of positive and negative numbers
#include <stdio.h>
void main(){
    int pc=0,nc=0,n,i;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=0){
            pc=pc+1;
        }
        else{
            nc=nc+1;
        }
    }
    printf("Positive Number : %d\nNegative Number : %d",pc,nc);
}