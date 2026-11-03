//Allocate and de-allocate memory for int, char and float variable at run time.
#include <stdio.h>
#include <stdlib.h>
void main(){
int n;
    int *p;
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    free(p);
    
    }