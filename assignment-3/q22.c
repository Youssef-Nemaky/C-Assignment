/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 30/8/2021
* Program/Purpose: a c function that removes the repeated number of an 
  input sorted array and return a new array without the repeated 
  numbers. The function shall return error if the size of the input 
  array is ZERO. The function takes four inputs:
  a. Old array.
  b. Old array size.
  c. New array (empty array).
  d. The size of the new array after fill it in the function.
  int removeDuplicates(int arr_old[], int n_old, int arr_new[], int 
  *n_new)
  Example:
  arr1 = {1,2,3,3,3,4,4,5,5,5} -> arr2 = {1,2,3,4,5}
====================================================================
*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int * passedArr, int arrSize);
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);

int main(void){
    int arr1[] = {1,2,3,3,3,4,4,5,5,5};
    int arr1Size = sizeof(arr1) / sizeof(*arr1); 
    int arr2[arr1Size];
    int arr2Size;
    
    removeDuplicates(arr1, arr1Size, arr2, &arr2Size);
    
    printf("arr1: ");
    printArray(arr1, arr1Size);


    printf("arr2: ");
    printArray(arr2,arr2Size);

    return 0;
}

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new){
    int i,j, counter = 0;
    for(i = 0; i < n_old; i++){
        for(j = i + 1; j < n_old; j++){
            if(arr_old[i] == arr_old[j]) break;
        }
        if((j == n_old) || (j == n_old - 1)){
            arr_new[counter++] = arr_old[i]; 
        }
    }
    *n_new = counter - 1;
    return *n_new;
}

void printArray(int * passedArr, int arrSize){
    int counter;
    for(counter = 0; counter < arrSize; counter++){
        printf("%d ", passedArr[counter]);
    }
    printf("\n");
}