/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a function that prints the frequency of a certain 
  character in a string.
====================================================================
*/

#include <stdio.h>

#define strLength 51

int freqOfChar(char *, char);

int main(void){
    char inputString[strLength], inputChar;

    printf("Enter your string: ");
    gets(inputString);

    printf("Enter the character you want to find the frequency for: ");
    scanf(" %c", &inputChar);

    printf("%c was found %d time/s", inputChar, freqOfChar(inputString, inputChar));
    return 0;
}

int freqOfChar(char * str, char x){
    int counter = 0, frequency = 0;
    while(str[counter] != '\0'){
        if(str[counter] == x){
            frequency++;
        }
        counter++;
    }
    return frequency;
}