// pattern 5 54 543 5432 54321
#include <stdio.h>
void main(){
   int i,j,m=6;
   for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        if(i==j){
            m=--m;
            printf("%d",m);
        }
        else{
            printf("%d",6-j);
        }
    }
    printf("\n");
   }
}