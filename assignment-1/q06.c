/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program that print the relation between two 
  integer number if those numbers are equal, not equal and which one 
  contain the higher value.
====================================================================
*/

#include <stdio.h>

int findBigger(int number1, int number2){
    if(number1 > number2){
        return 1;
    } else if (number1 < number2){
        return -1;
    } else return 0;
}
int main(void){
    int number1, number2;

    printf("Enter your two numbers: ");
    scanf("%d %d", &number1, & number2);

    switch (findBigger(number1, number2))
    {
    case 1:
        printf("%d is bigger than %d", number1, number2);
        break;
    case -1:
        printf("%d is smaller than %d", number1, number2);
        break;
    default:
        printf("%d is equal to %d", number1, number2);
        break;
    }

    return 0;
}