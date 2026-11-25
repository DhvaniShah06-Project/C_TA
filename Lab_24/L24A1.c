// Allocate and de-allocate different memory sizes for int, char, and float at run time
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_int, n_char, n_float;
    int *ip;
    char *cp;
    float *fp;

    // Take separate inputs for each type
    printf("Enter number of integers: ");
    scanf("%d", &n_int);

    printf("Enter number of characters: ");
    scanf("%d", &n_char);

    printf("Enter number of floats: ");
    scanf("%d", &n_float);

    // Allocate memory at run time
    ip = (int *)malloc(n_int * sizeof(int));
    cp = (char *)malloc(n_char * sizeof(char));
    fp = (float *)malloc(n_float * sizeof(float));

    // Calculate individual and total space using int
    int int_space = n_int * sizeof(int);
    int char_space = n_char * sizeof(char);
    int float_space = n_float * sizeof(float);
    int total_space = int_space + char_space + float_space;

    // Display allocated space using %d
    printf("\n--- Memory Allocated ---\n");
    printf("Memory for int:   %d bytes\n", int_space);
    printf("Memory for char:  %d bytes\n", char_space);
    printf("Memory for float: %d bytes\n", float_space);
    printf("Total heap space: %d bytes\n", total_space);

    // De-allocate memory
    free(ip);
    free(cp);
    free(fp);

    return 0;
}
