//Allocate dynamic memory for structure variable.
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[100];
    int salary;
};
void main()
{
    struct employee *p;
    p = (struct employee *)malloc(sizeof(struct employee));
    printf("Allocated address: %p\n", p);
    printf("Size of structure: %zu bytes\n", sizeof(struct employee));
    //returns the byte size of the struct employee type. It evaluates at compile time (not runtime)
    // for fixed-size structs, and its result has type size_t (an unsigned integer type for object sizes).
    free(p);
}