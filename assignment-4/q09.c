/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose:  Given a string, create a new string made up of its last 
  two letters, reversed and separated by a space, the word 
  is “bat”. Return string contains ”t a”
====================================================================
*/

#include <stdio.h>
#include <stdlib.h>

#define strSize 51
#define strMinLength 2
size_t getLength(char * passedStr);

int main(void){
    char str[strSize];
    size_t strLength;
    do{
        printf("Enter your string (max %d characters & min %d characters): ", strSize - 1, strMinLength);
        fgets(str, strSize, stdin);

        strLength = getLength(str);
    } while(strLength < 2);
    
    printf("%c %c", str[strLength - 1] , str[strLength - 2]);
    return 0;
}


size_t getLength(char * passedStr){
    size_t counter = 0;
    if(passedStr == NULL) return 0;
    while(passedStr[counter] != '\0') counter++;
    return counter - 1;
}