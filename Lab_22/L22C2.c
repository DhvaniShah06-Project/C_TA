// Delete all blank lines in a file then insert a blank line after the third line in a file.

#include <stdio.h>

int main()
{
    FILE *source = fopen("Code.txt", "r");
    FILE *target = fopen("output.txt", "a");

    int ch;
    int line_count = 0;
    int is_blank_line = 1;

    while ((ch = fgetc(source)) != EOF)
    {

        if (ch == '\n')
        {

            if (!is_blank_line)
            {
                fputc(ch, target);
                line_count++;

                if (line_count == 3)
                {
                    fputc('\n', target);
                }
            }
            is_blank_line = 1;
        }

        else if (ch != ' ' && ch != '\t' && ch != '\r')
        {
            is_blank_line = 0;
            fputc(ch, target);
        }
    }

    if (!is_blank_line)
    {
        fputc('\n', target);
        line_count++;
        if (line_count == 3)
        {
            fputc('\n', target);
        }
    }

    printf("File processed successfully.\n");

    fclose(source);
    fclose(target);
    return 0;
}
