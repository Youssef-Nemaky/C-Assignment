/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program to print the ASCII value of a character 
  input by the user.
====================================================================
*/

#include <stdio.h>

int main(void){
    char inputChar;

    printf("Enter your character: ");
    scanf(" %c", &inputChar);

    printf("%c in ASCII is %d", inputChar, inputChar);
    
    return 0;
}