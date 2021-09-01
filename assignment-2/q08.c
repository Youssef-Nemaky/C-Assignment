/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C Function that display Prime Numbers between Intervals (two
  numbers) by Making Function.
====================================================================
*/

#include <stdio.h>
#include <math.h>

unsigned char isPrime(int number){
    int counter;
    if(number <= 1){
        return 0;
    }

    for(counter = 2;counter <= sqrt(number); counter++){
        if(number % counter == 0){
            return 0;
        }
    }
    return 1;
}

void displayPrimes(int number1, int number2){
    int counter;

    for(counter = number1; counter <= number2; counter++){
        if(isPrime(counter)){
            printf("%d ", counter);
        }
    }
}



int main(void){
    int number1, number2;

    printf("Enter your interval (two numbers): ");
    scanf("%d %d", &number1, &number2);

    displayPrimes(number1, number2);

    return 0;
}