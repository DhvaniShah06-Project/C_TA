//find whether given string is palindrome or not
#include <stdio.h>
void main(){
    int i,j,flag=0;
    char s[100];
    printf("Enter string : ");
    gets(s);
    for(i=0;s[i]!='\0';i++){}
    i--;
    j=i;
    for(i=0;s[i]!='\0';i++,j--){
        if(s[i]==s[j]){
        flag=1;
    }
    else{flag=0;}
}
if(flag==1){
    printf("String is Palindrome");
}
else{printf("String is not Palindrome");}
}