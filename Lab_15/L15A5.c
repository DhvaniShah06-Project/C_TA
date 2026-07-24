//
#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("Enter String : ");
    scanf("%s",str);
    int len=strlen(str);
    printf("\nLength %d",len);
}