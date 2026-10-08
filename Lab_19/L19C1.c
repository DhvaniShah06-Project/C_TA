//reverse using recursion
#include <stdio.h>
#include <math.h>
int rev(int n,int digits);
int main(){
    int digits,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter digits : ");
    scanf("%d",&digits);
    int res=rev(n,digits);
    printf("  %d",res);
}
int rev(int n,int digits){
    int r,sum;
    if(n==0){
        return 0;
    }
    return ((n%10*pow(10,digits-1))+rev(n/10,--digits));
}

