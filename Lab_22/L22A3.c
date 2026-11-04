// Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind()
#include <stdio.h>
void main()
{
    FILE *fp,*fp1;
    fp = fopen("../Lab_4/L4A1.c", "r");
    fp1 = fopen("demo.txt","a");
    char a = fgetc(fp);
    fputc(a, fp1);
    fscanf(fp, "%c", &a);
    fprintf(fp1, "%c", a);


    int c = fseek(fp, -2, 2);
    printf("The value of c is : %d\n", c);
    rewind(fp);
}