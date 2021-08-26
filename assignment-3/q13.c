/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a function to remove all characters in a string expect 
  alphabet.
====================================================================
*/

#include <stdio.h>

#define strLength 51

void removeAllExceptAlpha(char *);
unsigned char isAlpha(char);

int main(void){
    char inputString[strLength];

    printf("Enter your string: ");
    gets(inputString);

    removeAllExceptAlpha(inputString);
    printf("%s", inputString);

    return 0;
}

unsigned char isAlpha(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    } else return 0;
}
void removeAllExceptAlpha(char * str){
    int counter = 0, j = 0;
    while(str[counter] != '\0'){
        if(!isAlpha(str[counter])){
            j = counter;
            while(str[j] != '\0'){
                str[j] = str[j+1];
                j++;
            }
        } else counter++;
    }
}