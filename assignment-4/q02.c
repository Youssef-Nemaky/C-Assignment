/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 3/9/2021
* Program/Purpose: C Program to find length of a given string using pointer.
====================================================================
*/

#include <stdio.h>

#define strLength 51

size_t calcStrLength(char *);

int main(void){
    char str[strLength];
    printf("Enter your string: ");
    fgets(str,strLength,stdin);
    
    printf("The length of ur input string is: %llu", calcStrLength(str));
    
    return 0;
}

size_t calcStrLength(char * passedStr){
    size_t counter = 0;
    if(passedStr == NULL) return 0;

    while(passedStr[counter] != '\0'){
        counter++;
    }
    return counter - 1;
}