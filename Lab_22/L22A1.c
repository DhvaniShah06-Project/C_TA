// create open and close a file
#include <stdio.h>
void main()
{
   FILE *fp;
   fp = fopen("../Lab_4/L4A1.c", "r");
   printf("The contents of the file are:\n");
   
   char a = getc(fp);
   
   while (a != EOF)
   {
      a = getc(fp);
      printf("%c", a);
   }
   fclose(fp);
}