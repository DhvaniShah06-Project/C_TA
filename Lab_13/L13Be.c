***** ** ** ** *****
#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i==2&&j==1||i==3&&j==1||i==4&&j==1){
                printf("*   * ");
            }
            else if(i==1&&j==1||i==5&&j==1){
                printf("* * * * *");
            }
        }
        printf("\n");
    }
}