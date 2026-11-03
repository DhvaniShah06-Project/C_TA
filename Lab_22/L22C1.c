// 1. Capitalize the first letter of every word in a file

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *source = fopen("Code.txt", "r");
    FILE *target = fopen("output.txt", "w");

    int ch;
    int new_word = 1;

    while ((ch = fgetc(source)) != EOF)
    {
        if (isspace(ch))
        {
            new_word = 1;
        }
        else if (new_word)
        {
            ch = toupper(ch);
            new_word = 0;
        }

        fputc(ch, target);
    }

    printf("File capitalized successfully.\n");

    fclose(source);
    fclose(target);
    return 0;
}
