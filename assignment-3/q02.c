/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 24/8/2021
* Program/Purpose: a function which, given a string, return TRUE if all 
  characters are distinct and FALSE if any character is repeated.
====================================================================
*/
#include <stdio.h>

#define stringLength 51

unsigned char isDistinct(char * passedString,unsigned char length);

int main(void){
    char inputString[stringLength];

    printf("Enter your string(max 50 characters): ");
    scanf(" %s", inputString);

    if(isDistinct(inputString, stringLength)){
        printf("All characters are distinct\n");
    } else {
        printf("NOT All characters are distinct\n");
    }
    return 0;
}

unsigned char isDistinct(char * passedString,unsigned char length){
    unsigned char i,j;

    for(i = 0; passedString[i] != '\0'; i++){
        for(j = i + 1; passedString[j] != '\0'; j++){
            if(passedString[i] == passedString[j]) return 0;
        }
    }
    return 1;
}