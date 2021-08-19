/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 19/8/2021
* Program/Purpose: converting temperature from Celsius to Fahrenheit,
given the formula: F = C x 9 / 5 + 32
====================================================================
*/
#include <stdio.h>

int main(void){
    float celsius;

    printf("Enter your temperature in celsius: ");
    scanf("%f", &celsius);

    printf("%.2f in celsius = %.2f in faherneit", celsius, celsius * 9 / 5 + 32);
    return 0;
}