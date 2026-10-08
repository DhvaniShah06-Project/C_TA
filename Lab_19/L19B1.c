//power
#include <stdio.h>
int power(int b,int p);
void main(){
    int b,p;
    printf("Enter b and p : ");
    scanf("%d %d",&b,&p);
    int res=power(b,p);
    printf("%d^%d : %d",b,p,res);
}
int power(int x,int y){
    int i=0;
    if(i>=y){
        return 1;
    }
    else{
        return x*(power(x,y-1));
        i++;  
    }
}