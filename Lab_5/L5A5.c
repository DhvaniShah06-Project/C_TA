// This program is about greatest of three numbers
#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of a,b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    
       if(a>b && a>c){ 
        printf("a is greatest");
       }
       else if(b>c && b>a){
        printf("b is greatest");
        }
       else if(c>a && c>b){
        printf("c is largest");
       }
}
//(a>b)?((a>c)?("a is greatest"):("c is greatest")):((b>c)?("b is greatest"):("c is greatest"))