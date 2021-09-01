/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 25/8/2021
* Program/Purpose: a C function that use the bubble sort algorithm to sort 
  an integer array in ascending order (search for the bubble sorting 
  algorithm).
====================================================================
*/

#include <stdio.h>

#define arrSize 10

void printArray(int *, int);
void bubbleSort(int *, int);

int main(void){
    int numbers[arrSize], counter;

    printf("Enter your %d number/s: ", arrSize);
    for(counter = 0; counter < arrSize; counter++){
        scanf("%d", &numbers[counter]);
    }

    printf("Before Sorting: ");
    printArray(numbers, arrSize);

    bubbleSort(numbers, arrSize);
    printf("After  Sorting: ");
    printArray(numbers, arrSize);

    return 0;
}

void printArray(int * numbersArray , int size){
    int counter;
    for(counter = 0; counter < size; counter++){
        printf("%d ", numbersArray[counter]);
    }
    printf("\n");
}

void bubbleSort(int * numbersArray, int size){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if(numbersArray[i] > numbersArray[j]){
                numbersArray[i] = numbersArray[i] ^ numbersArray[j];
                numbersArray[j] = numbersArray[i] ^ numbersArray[j];
                numbersArray[i] = numbersArray[i] ^ numbersArray[j];
            }
        }
    }
}