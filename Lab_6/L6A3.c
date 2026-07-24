//This program is about identifying type of data input i.e is upper case or lower case or numbers or special characters
#include <stdio.h>
void main(){
    char alphabet;
    printf("Enter alphabet : ");
    scanf(" %c",&alphabet);

    if(alphabet>='a'&&alphabet<='z'){
        printf(" %c is Lower Case",alphabet);
    }
    else if (alphabet>='A'&&alphabet<='Z'){
        printf(" %c is Upper Case",alphabet);
    }
    else if(alphabet>='0'&&alphabet<='9'){
        printf(" %c is Number",alphabet);
    }
    else{
        printf(" %c is Special Character",alphabet);
    }
}