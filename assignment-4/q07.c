/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: C function to swap two numbers using bitwise 
  operation and call it using pointer to function.
====================================================================
*/

#include <stdio.h>

void swapTwoNumbers(int * num1, int * num2);

int main(void){
    int num1, num2;
    void (*swapTwoNumbersPtr)(int *, int *) = swapTwoNumbers;

    printf("Enter your number1: ");
    scanf("%d", &num1);

    printf("Enter your number2: ");
    scanf("%d", &num2);

    printf("Before Swapping:\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    (*swapTwoNumbersPtr)(&num1, &num2);
    printf("After  Swapping:\n");
    printf("num1: %d, num2: %d\n", num1, num2);
    
    return 0;
}

void swapTwoNumbers(int * num1, int * num2){
    *num1 ^= *num2;
    *num2 ^= *num1;
    *num1 ^= *num2;
}