// manual implementation of string's strlen strcpy,strcmp,strconcat

#include <stdio.h>
void main()
{
    int i, j, l1, l2, flag, len1 = 0, len2 = 0, c, k, b;
    char s1[100], s2[100];
    printf("Enter String 1 : ");
    scanf("%[^\n]s", &s1); // can also use gets
    printf("Enter String 2 : ");
    scanf(" %[^\n]s", &s2);

    // length s1 = hello length = 5
    for (i = 0; s1[i] != '\0'; i++)
    {
        l1 = l1 + 1;
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        l2 = l2 + 1;
    }
    printf("Length of String 1 : %d\nLength of String 2 : %d", l1, l2);
    // string copy

    for (c = 0; s1[c] != '\0'; c++)
    {
        s2[c] = s1[c];
    }
    printf(" \nCopied String : %s", s2);

    // string comparison s1=ball s2=ball yes same s1=bat s2=ball not same
    int max = (l1 >= l2) ? l1 : l2;
    for (b = 0; b < max; b++)
    {
        if (s1[b] != s2[b] || s1[b] > s2[b] || s1[b] < s2[b])
        {
            flag = 1;
            break;
        }
        if (s1[b] == s2[b])
        {
            flag = 0;
        }
    }

    if (flag == 0)
    {
        printf("\nBoth Strings are equal");
    }
    if (flag == 1)
    {
        printf("\nString 1 is not equal to String 2");
    }
    // String Concatenation s1=cat s2=ball s1=catball
    int start = l1;
    for (int i = l1; i < l1 + l2; i++)
    {
        s1[i] = s2[i - l1];
    }
    printf("\nConcatenated String : %s", s1);
}// git refresh
