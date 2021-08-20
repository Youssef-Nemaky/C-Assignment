/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program that reads a positive integer and computes
  the factorial.
====================================================================
*/

#include <stdio.h>

long factRecursive(int number){
    if(number == 1){
        return 1;
    } else {
        return number * factRecursive(number - 1);
    }
}

long fact(int number){
    int counter;
    long result = 1;

    for(counter = 1; counter <= number; counter++){
        result *= counter;
    }

    return result;
}
int main(void){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("factorial of %d = %ld\n", number, fact(number));
    printf("using recursion: factorial of %d = %ld\n", number, factRecursive(number));
    
    return 0;
}