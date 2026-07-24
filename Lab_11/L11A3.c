//multiplication table of given number
#include <stdio.h>
void main(){
    int n,i,s;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        s=n*i;
        printf("%d*%d=%d\n",n,i,s);
    }
}
