// capitalize first word
#include <stdio.h>
void main()
{
    FILE *fp, *f1;
    fp = fopen("Code.txt", "r");
    f1 = fopen("New.txt", "w");
    char a = fgetc(fp);
    if (a >= 'a' && a <= 'z')
    {
        a = a - 32;
    }
    fputc(a, f1);
    printf("%c", a);
    while (a != EOF)
    {
        if (a == ' ' || a == '\n')
        {
            a = fgetc(fp);
            if (a >= 'a' && a <= 'z')
            {
                a = a - 32;
                fputc(a, f1);
                printf("%c", a);
            }
            else
            {
                fputc(a, f1);
                printf("%c", a);
            }
        }
        else
        {
            a = fgetc(fp);
            fputc(a, f1);
            printf("%c", a);
        }
    }
    fclose(fp);
}