// ASCII Value
#include <stdio.h>
void main()
{
    int m = 0;
    char ch = '\0';
    for (; m <= 127 && ch <= 127;)
    {
        printf("%d %c\n", m, ch);
        m = m + 1;
        ch = ch + 1;
    }
}