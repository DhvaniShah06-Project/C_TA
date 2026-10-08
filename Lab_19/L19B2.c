//lowercase to upper case 
#include <stdio.h>
void Upper(char *s);
void main(){
    char s[100];
    printf("Enter String : ");
    gets(s);
    Upper(s);
}
void Upper(char *s){
    int i=0,j;
    char s1[100];
    for(i=0,j=0;s[i]!='\0';i++,j++){
        if(s[i]>='a'&&s[i]<='z'){
            s1[j]=s[i]-32;
        }
        else{
            s1[j]=s[i];
        }
    }
    s1[j]='\0';
    printf("%s",s1);
}