/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a function to reverse a string by passing it to a function.
====================================================================
*/

#include <stdio.h>

#define strLength 51

void reverseString(char *);

int main(void){
    char inputString[strLength];

    printf("Enter your string: ");
    gets(inputString);

    reverseString(inputString);
    printf("%s", inputString);

    return 0;
}

void reverseString(char * passedString){
    int lengthOfString = 0, i, j;
    
    while(passedString[lengthOfString] != '\0'){
        lengthOfString++;
    }

    for(i = 0, j = lengthOfString - 1; i < lengthOfString/2; i++, j--){
        passedString[i] = passedString [i] ^ passedString[j];
        passedString[j] = passedString [i] ^ passedString[j];
        passedString[i] = passedString [i] ^ passedString[j];
    }
}