/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C function to check if the input is an even number or an odd
  number, if even number return 0 if odd number return 1.
  Example:
  Input 7, Output = 1 (Odd)
  Input 6, Output = 0 (Even)
====================================================================
*/

#include <stdio.h>

int isOdd(int number){
    if(number % 2){
        return 1;
    } else return 0;
}
int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(isOdd(number)){
        printf("%d is odd\n", number);
    } else {
        printf("%d is even\n", number);
    }
    return 0;
}