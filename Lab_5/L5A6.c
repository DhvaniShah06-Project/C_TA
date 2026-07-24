// This program is for vowel and consonant using if else
#include <stdio.h>
void main(){
    char A;
    printf("Enter value of A : ");
    scanf("%c",&A);
    if(A=='a'|| A=='e'|| A=='i'|| A=='o'|| A=='u'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
}
