/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program that reads a positive integer and
  checks if it is a perfect square.
====================================================================
*/
#include <stdio.h>
#include <math.h>

int main(void){
    unsigned int number, sqrtOfNumber;
    printf("Enter your number: ");
    scanf("%u", &number);

    sqrtOfNumber = sqrt(number);

    if(number == sqrtOfNumber * sqrtOfNumber){
        printf("The number is perfect square\nThe square root value is: %u", sqrtOfNumber);
    } else printf("The number is not a perfect square\n");
    
    return 0;
}