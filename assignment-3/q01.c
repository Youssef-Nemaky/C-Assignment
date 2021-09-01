/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 24/8/2021
* Program/Purpose:  The sum of an array is the sum of its individual elements. For 
  example, if an array is numbers = {1, 2, 3, 4}, the sum of the array 
  is 1+2+3+4 = 10.
  Function Description: Complete the function summation. The 
  function must return the integer sum of the numbers array.
  int summation(int numbers_size, int* numbers)
====================================================================
*/
#include <stdio.h>

int summation(int numbers_size, int* numbers);

int main(void){
    int numbers[] = {1,2,3,4};

    printf("The sum of the array is %d", summation(sizeof(numbers) / sizeof(*numbers), numbers));

    return 0;
}

int summation(int numbers_size, int* numbers){
    int counter, total = 0;

    for(counter = 0; counter < numbers_size; counter++){
        total += numbers[counter];
    }

    return total;
}