//Copy a one string’s value in another string using a string pointer
#include <stdio.h>
void main(){
    int i;
    char s1[100],s2[100],*s;
    printf("Enter String : ");
    gets(s1);
    s=&s1[0];
    for(i=0;s1[i]!='\0';i++){
        s2[i]=*(s+i);
    }
    s2[i]='\0';
    printf("String : %s",s2);
}