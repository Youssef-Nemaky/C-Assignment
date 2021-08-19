/*
* Author: Youssef El-Nemaky
* Date: 19/8/2021
* Program/Purpose: a program that take two integers from 
* the user and print the results of this equation:
* Result = ((num1 + num2) * 3) – 10
*/
#include <stdio.h>

long equationSolver(int number1, int number2){
    return ((number1 + number2) * 3) - 10;
}
int main(void){
    int number1, number2;
    
    printf("Enter your two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("the result of ((%d + %d) * 3 ) - 10 = %ld", number1, number2, equationSolver(number1, number2));
    return 0;
}