/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C function to count the number of 1’s in an 
  unsigned 8-bit integer.
====================================================================
*/
#include <stdio.h>

unsigned char countOnes(unsigned char);

int main(void){
    unsigned char number;

    printf("Enter your number (You can enter it in hex or octa or even decimal): ");
    scanf("%i", &number);

    printf("%d has %u one/s", number, countOnes(number));

    return 0;
}

unsigned char countOnes(unsigned char number){
    unsigned char mask, counter, total = 0;
    for(counter = 0; counter < 8; counter++){
        mask = (1<<counter);
        if((number & mask) != 0){
            total++;
        }
    }
    return total;
}