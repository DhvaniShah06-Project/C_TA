//HCF and LCM
#include <stdio.h>
void main(){
    int a,b,i=2,n=2,HCF=1,LCM=1,min,max,c,d;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    c=a;
    d=b;
    (a>b)?(min=b):(min=a);
    while(i<=min){
        while((a%i==0)&&(b%i==0)){
            HCF=HCF*i;
            a=a/i;
            b=b/i;
        }
        i=i+1; 
    }
    (c>d)?(max=c):(max=d);
    while (n<=max){  
            while((c%n==0)&&(d%n==0)){
               c= c/n;
               d=d/n;
               LCM=LCM*n;
            }
                while(d%n==0){
                    d=d/n;
                    LCM=LCM*n;
                }
             while(c%n==0){
                    c=c/n;
                    LCM=LCM*n;
                }
        n=n+1;
    } 
    printf("L.C.M : %d",LCM);
    printf("\nH.C.F : %d",HCF);  
}