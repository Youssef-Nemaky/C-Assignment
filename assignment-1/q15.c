/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to calculate the power of a number.
  The number and its power are input from user.
====================================================================
*/
#include <stdio.h>
#include <math.h>
int main(void){
    double number, power;

    printf("Enter your number: ");
    scanf("%lf", &number);

    printf("Enter the power: ");
    scanf("%lf", &power);

    printf("%.2lf ^ %.2lf = %.2lf", number, power, pow(number, power));

    return 0;
}