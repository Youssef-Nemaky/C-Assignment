/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to count number of digits in a
  decimal number.
====================================================================
*/

#include <stdio.h>

int calcNumberOfDigtits(int number){
    int total = 0;

    if(number == 0){
        total = 1;
    } else {
        while(number != 0){
            number /= 10;
            total++;
        }
    }

    return total;
}

int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("%d has %d digit/s.\n", number, calcNumberOfDigtits(number));
    return 0;
}