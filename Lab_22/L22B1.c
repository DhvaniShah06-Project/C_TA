// print in reverse order
#include <stdio.h>
void main()
{
    FILE *fp;
    char s[1000];
    int i = 0;
    fp = fopen("L4B1.c", "r");
    char a = fgetc(fp);
    while (a != EOF)
    {
        a = fgetc(fp);
        s[i] = a;
        i++;
    }
    for (; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}