/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a function which, given a string, converts all uppercase 
  letters to lowercase, leaving the others unchanged.
====================================================================
*/

#include <stdio.h>

#define stringLength 51

void strToLower(char *);

int main(void){
    char inputString[stringLength];

    printf("Enter your string: ");
    scanf(" %s", inputString);

    strToLower(inputString);
    printf("%s", inputString);
    return 0;
}

void strToLower(char * passedString){
    unsigned int counter = 0;
    while(passedString[counter] != '\0'){
        if(passedString[counter] >= 'a' && passedString[counter] <= 'z'){
            passedString[counter] = passedString[counter] - 'a' + 'A';
        }
        counter++;
    }
}