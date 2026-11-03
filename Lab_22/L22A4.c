// append one file at end of other
#include <stdio.h>
void main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("../Lab_4/L4A1.c", "a");
    fp2 = fopen("../Lab_4/L4A5.c", "r");
    char a = fgetc(fp2);
    while (a != EOF)
    {
        fputc(a, fp1);
        a = fgetc(fp2);
    }

    char b = fgetc(fp1);
    while (b != EOF)
    {
        b = fgetc(fp1);
        printf("%c", b);
    }
}
