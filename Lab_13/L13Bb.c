// 1 01 010 1010 10101
#include <stdio.h>
void main(){
    int i,j,m;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(m==0){
                printf("1 ");
                m=m+1;
            }
            else if(m==1){
                printf("0 ");
                m=m-1;
            }
        }
        printf("\n");
    }
}