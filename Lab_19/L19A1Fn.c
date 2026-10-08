//factorial by fn
#include <stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
}
int fact(int n){
    int i=n;
    for(;n>1;n--){
       i=i*(n-1);
    }
    return i;
}