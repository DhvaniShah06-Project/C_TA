#include <stdio.h>
#include <stdlib.h>
struct employee{
    char name[100];
    int salary;
};
void main(){
    struct employee *p;
    p=(struct employee*)malloc(sizeof(struct employee*));
    printf("%d",p);
}