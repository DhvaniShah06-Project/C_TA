// Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind()
#include <stdio.h>
void main()
{
    FILE *fp;
    int b;
    fp = fopen("../Lab_4/L4A1.c", "r");
    fscanf(fp, "%s", &b);
    fprintf(fp, "%s", b);

    char a = fgetc(fp);

    fseek(fp, 0, 2);
    rewind(fp);
}