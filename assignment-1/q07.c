/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program that takes three integers, and prints
  out the smallest number.
====================================================================
*/
#include <stdio.h>

int main(void){
    int numbers[3], smallestIndex = 0, arrayCounter;
    printf("Enter your three numbers: ");
    scanf("%d %d %d", &numbers[0], &numbers[1], (numbers+2));

    for(arrayCounter = 1; arrayCounter < (sizeof(numbers) / sizeof(*numbers)); arrayCounter++){
        if(numbers[smallestIndex] > numbers[arrayCounter]){
            smallestIndex = arrayCounter;
        }
    }

    printf("%d is the smallest number", numbers[smallestIndex]);

    return 0;
}