// Allocate and de-allocate memory for int, char and float at run time
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ip;
    char *cp;
    float *fp;

    printf("Enter n: ");
    scanf("%d", &n);

    // Allocate memory at run time
    ip = (int *)malloc(n * sizeof(int));
    cp = (char *)malloc(n * sizeof(char));
    fp = (float *)malloc(n * sizeof(float));

    // De-allocate memory
    free(ip);
    free(cp);
    free(fp);

    return 0;
}