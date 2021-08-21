/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a C Function that return the addition or subtraction or
  multiplication or division for two numbers. The function should take the
  required operation and two numbers as arguments. It also should check
  that the input operation is one of those operation that mentioned before
  and if not it should return error. The function should be implemented
  using switch case.
====================================================================
*/
#include <stdio.h>

long calculate(int number1, int number2, int operation, int * error){
    long result = 0;
    *error = 0;
    switch (operation)
    {
    case 1:
        return number1 + number2;
        break;
    case 2:
        return number1 - number2;
        break;
    case 3:
        return number1 * number2;
        break;
    case 4: 
        return number1 / number2;
        break;
    default:
        *error = 1;
        return 0;
        break;
    }
}

int main(void){
    int number1, number2, operation;
    int error;
    long result = 0;
    printf("Enter your two numbers: ");
    scanf("%d %d", &number1 , &number2);
    do{
        error = 0;
        printf("Choose:\n");
        printf("1)Add \t 2)Sub\n3)Mul \t 4)Div\n");
        scanf("%d", &operation);

        result = calculate(number1, number2, operation, &error);

        if (error == 0){
            printf("result = %ld", result);
        }
        else
            printf("wrong operation!\n");
    } while (error == 1);

    return 0;
}