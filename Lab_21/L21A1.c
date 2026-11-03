//struct employee
#include <stdio.h>
#include <string.h>
struct employee{
    char name[100];
    int salary;
};
void main(){
    int a;
    struct employee e1;
    e1.salary=25000;
    strcpy(e1.name,"Dhvani Shah");
    printf("%d %s",e1.salary,e1.name);

}