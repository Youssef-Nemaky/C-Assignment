/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: Given a positive integer z, check if z can be written 
  as 𝑝 ^ 𝑞 , where p and q are positive integers than 1, if z can be 
  written as 𝑝 ^ 𝑞 return 1 else return 0.
  Description:
  A positive integer that needs to be determined if it can be expressed as a 
  power of square number.
====================================================================
*/ 

#include <stdio.h>
#include <math.h>

unsigned char isPowerOfTwoNumbers(unsigned int);

int main(void){
    unsigned int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(isPowerOfTwoNumbers(number)){
        printf("%d can be represented as P ^ Q", number);
    } else printf("%d can not be represented as P ^ Q", number);

    return 0;
}

unsigned char isPowerOfTwoNumbers(unsigned int number){
    unsigned int p, q;

    for(p = 2; p <= sqrt(number); p++){
        for(q = 2; ; q++){
            if(pow(p,q) == number){
                printf("%u ^ %u = %u\n", p, q, number);
                return 1;
            } else if(pow(p,q) > number){
                break;
            }
        }
    }
    return 0;
}