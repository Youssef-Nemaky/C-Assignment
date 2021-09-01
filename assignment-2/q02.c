/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C Function that takes one character and checks if
  it is alphabet or not.
====================================================================
*/

#include <stdio.h>

int main(void){
    char inputCharacter;

    printf("Enter your character: ");
    scanf(" %c", &inputCharacter);

    if((inputCharacter >= 'A' && inputCharacter <= 'Z') || (inputCharacter >= 'a' && inputCharacter <= 'z')){
        printf("%c is an alphabet", inputCharacter);
    } else printf("%c is not an alphabet", inputCharacter);

    return 0;
}