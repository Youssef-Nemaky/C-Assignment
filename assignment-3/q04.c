/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 25/8/2021
* Program/Purpose: a C function that use the selection sort algorithm to sort 
  an integer array in ascending order (search for the selection sorting algorithm).
====================================================================
*/

#include <stdio.h>

#define arrSize 10

void printArray(int *, int);
void selectionSort(int *, int);

int main(void){
    int numbers[arrSize], counter;

    printf("Enter your %d number/s: ", arrSize);
    for(counter = 0; counter < arrSize; counter++){
        scanf("%d", &numbers[counter]);
    }
    
    printf("Before Sorting: ");
    printArray(numbers, arrSize);

    selectionSort(numbers, arrSize);
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

void selectionSort(int * numbersArray, int size){
    int i, j, min;
    for(i = 0; i < size - 1; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(numbersArray[min] > numbersArray[j]){
                min = j;
            }
        }
        if(min != i){
            numbersArray[i] = numbersArray[i] ^ numbersArray[min];
            numbersArray[min] = numbersArray[i] ^ numbersArray[min];
            numbersArray[i] = numbersArray[i] ^ numbersArray[min];
        }
    }
}