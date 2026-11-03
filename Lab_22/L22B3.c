// 3. Merge alternate lines from two file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("New.txt", "r");
    FILE *file2 = fopen("Student.txt", "r");
    FILE *merged = fopen("merged.txt", "w");

    int ch;
    int has_content = 1;

    while (has_content)
    {
        has_content = 0;

        while ((ch = fgetc(file1)) != EOF)
        {
            has_content = 1;
            fputc(ch, merged);
            if (ch == '\n')
                break;
        }

        while ((ch = fgetc(file2)) != EOF)
        {
            has_content = 1;
            fputc(ch, merged);
            if (ch == '\n')
                break;
        }
    }

    printf("Merged successfully.\n");

    fclose(file1);
    fclose(file2);
    fclose(merged);
    return 0;
}
