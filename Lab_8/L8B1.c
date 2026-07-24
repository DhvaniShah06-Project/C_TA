// prints square roots of number 0 to 9
#include <stdio.h>
#include <math.h>
void main(){

    float a,i=0;
    while(i<=9){
        a= sqrt(i);
        printf("\nNumber %.1f\nSquare Root : %.3f\n",i,a);
        i=i+1;
    }
}