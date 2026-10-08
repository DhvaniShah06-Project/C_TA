// use strlen,strcpy,strcat,strcmp,strrev,strlwr,strupr
#include <stdio.h>
#include <string.h>
void length(char *s1, char *s2);
void main()
{
    char s1[100], s2[100];
    printf("Enter string 1 : ");
    gets(s1);
    printf("Enter string 2 : ");
    gets(s2);
    length(s1, s2);
}
void length(char *s1, char *s2)
{
    int i, j;
    char s[100], st[100];
    for (i = 0; s1[i] != '\0'; i++)
    {
        s[i] = s1[i];
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        st[j] = s2[j];
    }
    s1[i] = '\0';
    s2[j] = '\0';
    printf("Length of string 1 : %d\nLength of String 2 : %d", strlen(s1), strlen(s2));
    if (strcmp(s1, s2) == 0)
    {
        printf("\nStrings are same");
    }
    else
    {
        printf("\nStrings are not same");
    }
    strcat(s, st);
    printf("\nContentination : %s", s);
    s[100] = s1[100];
    st[100] = s2[100];
    printf("\nCopy : %s", strcpy(s1, s2));
    s1[100] = s[100];
    s2[100] = st[100];
    printf("\n%s %s", s, st);
    printf("\nReverse of String 1  : %s Reverse of String 2 : %s", strrev(s), strrev(st));
    strrev(s);
    strrev(st);
    printf("\nLower of string 1 : %s Lower of string 2 : %s", strlwr(s), strlwr(st));
    printf("\nUpper case of string 1 : %s Upper case of string 2 : %s", strupr(s), strupr(st));
}