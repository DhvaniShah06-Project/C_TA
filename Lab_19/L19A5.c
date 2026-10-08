//replace character
#include <stdio.h>
void Replace(char *s,char m);
void main(){
    char s[100],m;
    printf("Enter string : ");
    scanf("%[^\n]s",s);
    printf("Which Character To Replace : ");
    scanf(" %c",&m);
    Replace(s,m);
}
void Replace(char *s,char m){
    int i,j;
    char a;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==m){
                printf("Enter character : ");
                scanf(" %c",&a);
                s[i]=a;
            }
        }
    
    s[i]='\0';
     printf(" %s",s);  
    }