//pattern 1 12 123 1234 12345
#include <stdio.h>
void main(){
    int i,j,m=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
         if(i==j){     // direct printf(%d,j)
           m= ++m;
printf("%d",m);
         }
else{
    printf("%d",j);
}
         }               
printf("\n");
    }
}