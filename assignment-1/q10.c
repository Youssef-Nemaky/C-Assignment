/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program to make a simple calculator. 
  The calculator takes the operation (+ or – or * or /) and takes 
  the two input arguments and print the results.
  I will use an array of pointers to function just to make it a little 
  bit challenging
====================================================================
*/

#include <stdio.h>

/* functions declrations/prototypes */
long add(int, int);
long sub(int, int);
long mul(int, int);
long div(int, int);

int main(void){
    int number1, number2, choice;
    long (*operation[4])(int,int) = {add, sub, mul, div};

    printf("Enter your two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("Choose:\n");
    printf("1)Add \t 2)Sub\n3)Mul \t 4)Div\n");
    scanf("%d", &choice);

    printf("result = %ld", (*operation[choice - 1])(number1, number2));
    return 0;
}


long add(int number1, int number2){
    return number1 + number2;
}

long sub(int number1, int number2){
    return number1 - number2;
}

long mul(int number1, int number2){
    return number1 * number2;
}

long div(int number1, int number2){
    return number1 / number2;
}