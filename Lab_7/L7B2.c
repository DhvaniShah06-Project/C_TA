// Alphabet or not
#include <stdio.h>
void main(){
    char Character;
    printf("Enter Character : ");
    scanf("%c",&Character);
    (Character>='a'&&Character<='z'||Character>='A'&&Character<='Z')?(printf("Alphabet")):(printf("Not Alphabet"));
}