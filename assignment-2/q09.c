/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C Function that swaps the value of two integer numbers.
====================================================================
*/

#include <stdio.h>

void swapByValue(int number1, int number2){
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;
}

void swapByReference(int * number1, int * number2){
    *number1 = *number1 ^ *number2;
    *number2 = *number1 ^ *number2;
    *number1 = *number1 ^ *number2;
}

int main(void){
    int number1, number2;

    printf("Enter your two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("\nBefore Swapping\nnumber1: %d & number2: %d\n", number1, number2);

    swapByValue(number1, number2);
    printf("\nAfter Swapping By Value\nnumber1: %d & number2: %d\n", number1, number2);

    swapByReference(&number1, &number2);
    printf("\nAfter Swapping By Reference\nnumber1: %d & number2: %d\n", number1, number2);

    return 0;
}