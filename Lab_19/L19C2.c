//permutation and combination
#include <stdio.h>
void Permutation(int n,int r);
void Combination(int n,int r);
void main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    Permutation(n,r);
    Combination(n,r);
}
void Permutation(int n, int r){
    int i=n,m=n;
    for(;n>1;n--){
       i=i*(n-1);
    }
    printf("%d\n",i);
        int c=m-r,a=m-r;
    for(;n-r>1;a--){
        c=c*(m-r-1);
    }
    printf("  %d\n",c);
    printf("%ld ",i/c);
}
void Combination(int n,int r){
    int j=r,i=n,k=r;
for(;r>1;r--){
        j=j*(r-1);
    }
    int c=n-k,a=n-k;
    for(;a>1;a--){
        c=c*(a-1);
    }
     for(;n>1;n--){
       i=i*(n-1);
    }
   
    printf("%ld",i/(j*c));
}