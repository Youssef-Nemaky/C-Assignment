/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C Function that reads two integers and checks if the first is
  multiple of the second.
====================================================================
*/

#include <stdio.h>

int isMultiple(int number1, int number2){
    return number1 % number2 == 0? 1:0;
}

int main(void){
    int number1, number2;

    printf("Enter your two numbers: ");
    scanf("%d %d", &number1, &number2);

    if(isMultiple(number1, number2)){
        printf("%d is a multiple of %d", number1, number2);
    } else {
        printf("%d is not a multiple of %d", number1, number2);
    }

    return 0;
}