/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: Write a c program that SWAP the value of the two 16-
  bits of 32-bits integer number.
====================================================================
*/

#include <stdio.h>

void swapHalf(unsigned int *);

int main(void){
    unsigned int num;

    printf("Enter your number in HEX (try 0x12345678): ");
    scanf("%i", &num);

    printf("number before swapping: %x\n", num);
    swapHalf(&num);
    printf("number after  swapping: %x", num);

    return 0;
}

void swapHalf(unsigned int * num){
    unsigned short * firstHalf = (unsigned short *)num;
    unsigned short * secondHalf = firstHalf++;

    *firstHalf ^= *secondHalf;
    *secondHalf ^= *firstHalf;
    *firstHalf ^= *secondHalf;
}