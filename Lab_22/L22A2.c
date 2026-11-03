// count characters space tabs and new lines in file
#include <stdio.h>
void main()
{
   FILE *fp;
   fp = fopen("../Lab_4/L4A1.c", "r");
   char a = fgetc(fp);
   int cn = 0, cs = 0, ct = 0, cc = 0;
   while (a != EOF)
   {
      if (a == '\n')
      {
         cn++;
      }
      if (a == 32)
      {
         cs++;
      }
      if (a == '\t')
      {
         ct++;
      }
      if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
      {
         cc++;
      }
      a = fgetc(fp);
   }
   fclose(fp);
   printf("Space %d New Line : %d Tabs : %d Characters : %d", cs, cn, ct, cc);
}