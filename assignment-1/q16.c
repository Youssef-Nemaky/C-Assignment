/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to reverse a number.
====================================================================
*/

#include <stdio.h>
#include <math.h>

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

int reverseNumber(int number){
    unsigned char isNegative = 0;
    int numberOfDigits = calcNumberOfDigtits(number);
    int numberReversed = 0;
    if(number < 0){
        isNegative = 1;
    }

    for(;numberOfDigits >=1; numberOfDigits--){
        numberReversed += number % 10 * pow(10, numberOfDigits - 1);
        number /= 10;
    }
    return numberReversed;
}

int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("%d reversed is %d", number, reverseNumber(number));
    return 0;
}
