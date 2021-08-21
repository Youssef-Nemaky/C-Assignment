/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to display English alphabets from A to Z.
====================================================================
*/
#include <stdio.h>

int main(void){
    unsigned char counter;

    for(counter = 'A'; counter <= 'Z'; counter++){
        printf("%c ", counter);
    }

    return 0;
}