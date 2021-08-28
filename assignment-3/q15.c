/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 28/8/2021
* Program/Purpose: a function to concatenate two strings without using 
  strcat function.
====================================================================
*/

#include <stdio.h>

#define str1Length 51
#define str2Length 51

void catString(char *, char *);

int main(void){
    char inputStr1[str1Length], inputStr2[str2Length];

    printf("Enter your first string: ");
    gets(inputStr1);

    printf("Enter your second string: ");
    gets(inputStr2);

    catString(inputStr1, inputStr2);
    printf("after concatenating, first string is\n");
    printf("%s", inputStr1);

    return 0;
}

void catString(char * str1, char * str2){
    unsigned int strLength1 = 0, counter = 0;

    while(str1[strLength1] != '\0'){
        strLength1++;
    }

    while (str2[counter] != '\0'){
        str1[counter + strLength1] = str2[counter];
        counter++;
    }
    str1[counter + strLength1] = '\0';
}
