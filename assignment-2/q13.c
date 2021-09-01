/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: write a function to add two floating numbers.
  Determine the integer floor of the sum. The floor is the truncated float
  value, anything after the decimal point is dropped. For instance
  floor(1.1+3.05)=floor(4.15)=4
====================================================================
*/

#include <stdio.h>

int floorSum(float, float);

int main(void){
    float number1, number2;

    printf("Enter your two numbers: ");
    scanf("%f %f", &number1, &number2);

    printf("the floor sum of %.2f + %.2f = %d", number1, number2, floorSum(number1, number2));
    
    return 0;
}

int floorSum(float number1, float number2){
    return number1 + number2;
}