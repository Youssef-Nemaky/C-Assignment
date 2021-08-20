/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: Print sum of first 100 integers. (With data validation)
====================================================================
*/

#include <stdio.h>

int main(void){
    int sum = 0, i;

    for(i = 1; i <= 100;i++){
        sum += i;
    }

    printf("The sum of the first 100 numbers = %d\n", sum);
    printf("Data validation using equation (n * (n+1))/2 = %d", 100 * 101 /2);
    
    return 0;
}