// copy
#include <stdio.h>
void main()
{
    FILE *f1, *f2;
    char ch;
    f1 = fopen("../Lab_4/L4A1.c", "r");
    f2 = fopen("../Lab_4/L4A5.c", "w");
    do
    {
        ch = getc(f1);
        putc(ch, f2);
    } while (ch != EOF);
    fclose(f1);
    fclose(f2);
}
