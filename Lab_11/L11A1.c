//prints 1 to n
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;){    //for(i=1;i<=n,i++)also true
    
        printf("%d\n",i);
        i=i+1;
    }
}