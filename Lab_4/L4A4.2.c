// This  code is finding average with scanf fn
#include <stdio.h>
void main(){
    float a,b,c,Average;
    printf("Enter Value of a");
    scanf("%f",&a);
    printf("Enter value of b");
    scanf("%f",&b);
    printf("Enter value of c");
    scanf("%f",&c);
    Average=((a+b+c)/3);
    printf("Average of given No. is : %f",Average);
}