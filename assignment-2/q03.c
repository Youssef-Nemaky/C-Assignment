/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C Function that checks if the number if positive or negative.
====================================================================
*/

#include <stdio.h>

int isPositive(int number){
    return number > 0? 1:0;
}
int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(number == 0){
        printf("%d is neither positive nor negative\n", number);
    } else {
        if (isPositive(number)){
            printf("%d is a positive number\n", number);
        }
        else printf("%d is a negative number\n", number);
    }

    return 0;
}