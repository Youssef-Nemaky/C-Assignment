/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C function to count the number of 1’s in an unsigned 
  32-bit integer.
====================================================================
*/
#include <stdio.h>

unsigned int countOnes(unsigned int);

int main(void){
    unsigned int number;

    printf("Enter your number (You can enter it in hex or octa or even decimal): ");
    scanf("%i", &number);

    printf("%u has %u one/s", number, countOnes(number));
    return 0;
}


unsigned int countOnes(unsigned int number){
    unsigned int total = 0, mask = 1;
    unsigned char counter;

    for(counter = 0; counter < 32; counter++){
        mask = (1<<counter);

        if((number & mask) != 0){
            total++;
        }
    }
    return total;
}
