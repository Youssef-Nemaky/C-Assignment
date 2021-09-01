/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: C Function that converts the any letter from lowercase to
  uppercase.
====================================================================
*/

#include <stdio.h>

char toUpper(char character){
    if(character >= 'A' && character <= 'Z'){
        return character;
    } else {
        return 'A' + (character - 'a');
    }
}

int main(void){
    char inputCharacter;

    printf("Enter your character: ");
    scanf(" %c", &inputCharacter);

    printf("%c to uppercase is %c", inputCharacter, toUpper(inputCharacter));
    return 0;
}