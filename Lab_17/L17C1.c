//length of string using pointer
#include <stdio.h>
void main(){
    char str[100],*p;
    int i,sum=0;
    printf ("Enter string : ");
    gets(str);
    p=str;
    for(i=0;*p!='\0';i++){ 
      sum++;
      p++;
    }
    printf("Length : %d",sum);
}