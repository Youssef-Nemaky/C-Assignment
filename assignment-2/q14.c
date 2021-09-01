/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: a C Function that calculate the Fibonacci series 
  using recursive method.
  The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
====================================================================
*/

#include <stdio.h>

int fib(int);

int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("fib(%d) = %d", number, fib(number));

    return 0;
}

int fib(int number){
    if(number == 0){
        return 0;
    } else if(number == 1){
        return 1;
    } else return fib(number - 1) + fib(number - 2);
}