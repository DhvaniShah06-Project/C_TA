//find character
#include <stdio.h>
void find(char *str1,char character);
void main(){
    char str1[100],character;
    int flag;
    gets(str1);
    printf("Which char to find : ");
    scanf("%c",&character);
    find(str1,character);

}
void find(char *str1,char character){
    int i=0,flag=0;
    char m=character;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]==m){
            flag=1;
    }
    }
    if(flag==1){
        printf("%c exists",m);
    }
    else{
        printf("%c not in string",m);
    }
    }

