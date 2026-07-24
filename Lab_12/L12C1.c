//pascal triangle;
#include <stdio.h.>
#include <math.h>
int main(){
    int n,coef=0,i,j,space;
    printf("Enter how many rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(space=i;space<n;space++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            if(i==0||j==0){
                coef=1;
            }
            else{
                coef=coef*(i-j+1);
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
    
}