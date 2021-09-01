/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C Function that prints the cube of any number.
====================================================================
*/

#include <stdio.h>

long cube(int number){
    return number * number * number; 
}
int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("cube of %d is %ld", number, cube(number));
    return 0;
}