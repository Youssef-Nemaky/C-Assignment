/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program that reads a positive integer and
  checks if it is a prime.
====================================================================
*/
#include <stdio.h>

unsigned char isPrime(unsigned int number){
    unsigned int counter;

    if(number == 1){
        return 0;
    }

    for(counter = 2; counter <= number/2; counter++){
        if(number % counter == 0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    unsigned int number;

    printf("Enter your number: ");
    scanf("%u", &number);

    if(isPrime(number)){
        printf("%u is prime", number);
    } else printf("%u is not a prime", number);

    return 0;
}