/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C function that return 0 if a given number is a power of 3,
  otherwise return 1 (except 3 to the power of 0).
====================================================================
*/ 

#include <stdio.h>

unsigned char isPowerOfThree(int);

int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(!isPowerOfThree(number)){
        printf("%d is a power of 3", number);
    } else {
        printf("%d is not a power of 3", number);
    }

    return 0;
}


unsigned char isPowerOfThree(int number){
    if(number == 0){
        return 1;
    }
    
    while(number != 1){
        if(number % 3 != 0){
            return 1;
        }
        number /= 3;
    }
    return 0;
}