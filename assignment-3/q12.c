/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a function to find the length of a string.
====================================================================
*/

#include <stdio.h>

#define strLength 51

int lengthOfStr(char *);

int main(void){
    char inputString[strLength];

    printf("Enter your string: ");
    gets(inputString);

    printf("The length of your string is: %d", lengthOfStr(inputString));
    return 0;
}

int lengthOfStr(char * str){
    int counter = 0;
    while(str[counter] != '\0'){
        counter++;
    }
    return counter;
}