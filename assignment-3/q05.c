/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 25/8/2021
* Program/Purpose: a C function to return the index of FIRST occurrence of a 
  number in a given array. Array index start from 0. If the item is not 
  in the list return -1. (Linear Search Algorithm)
  Example:
  Array = {1,2,3,4,4,4} 
  The required number is 4 it should return 3
====================================================================
*/

#include <stdio.h>

#define arrSize 6

int findNumber(int, int *, int);

int main(void){
    int numbers[arrSize], counter, numberToSearchFor, searchResult;

    printf("Enter your %d number/s: ", arrSize);
    for(counter = 0; counter < arrSize; counter++){
        scanf("%d", &numbers[counter]);
    }

    printf("Enter the number you would like to search for: ");
    scanf("%d", &numberToSearchFor);

    searchResult = findNumber(numberToSearchFor, numbers, arrSize); 
    if(searchResult == -1){
        printf("%d was not found in the array", numberToSearchFor);
    } else {
        printf("%d was found at index %d", numberToSearchFor, searchResult);
    }

    return 0;
}

int findNumber(int number, int * numbersArr, int size){
    int counter;
    for(counter = 0; counter < arrSize; counter++){
        if(number == numbersArr[counter]){
            return counter;
        }
    }
    return -1;
}