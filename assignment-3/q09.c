/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: The sequence of numbers 0, 1, 1, 2, 3, 5, 8, 13, … is called 
  Fibonacci numbers; each is the sum of the preceding 2. Write a 
  program which given n, returns the nth Fibonacci number.
  - with for/while
  - with recursion
====================================================================
*/

#include <stdio.h>

long fibSeriesLoop(int n);
long fibSeriesRec(int n);

int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("The %d", number);
    if(number == 11 || number == 12 || number == 13){
        printf("th");
    } else {
        switch (number % 10){
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");
            break;
        }
    }
   
    printf(" term in the fibonacci series is %ld using recursion function.\n", fibSeriesRec(number));
    printf("& %ld using loop function.", fibSeriesLoop(number));
    return 0;
}

long fibSeriesRec(int n){
    if(n == 0 || n == 1) return n;
    else return fibSeriesRec(n - 1) + fibSeriesRec(n - 2);
}

long fibSeriesLoop(int n){
    long base0 = 0, base1 = 1, counter = 2, current;
    if(n == 0 || n == 1){
        return n;
    } 
    while(counter <= n){
        current = base0 + base1;
        base0 = base1;
        base1 = current;
        counter++; 
    }
    return current;
}