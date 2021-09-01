/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 30/8/2021
* Program/Purpose: a C function that compare between 2 arrays with the 
  same length. It shall return 0 if the two arrays are identical and 1 
  if not.
====================================================================
*/

#include <stdio.h>

#define arr1Size 5
#define arr2Size 5
#define arr3Size 5

void printArray(int * arr, int arrSize);
unsigned char compareArray(int * arr1, int arr1_size, int * arr2, int arr2_size);

int main(void){
    int arr1[arr1Size] = {1,2,3,4,5};
    int arr2[arr2Size] = {1,2,3,4,5};
    int arr3[arr3Size] = {1,2,3,4,6};
    
    printf("arr1: ");
    printArray(arr1, arr1Size);
    
    printf("arr2: ");
    printArray(arr2, arr2Size);
    
    printf("arr3: ");
    printArray(arr3, arr3Size);
    
    if(!compareArray(arr1, arr1Size, arr2, arr2Size)){
        printf("arr1 & arr2 are identical\n");
    } else printf("arr1 & arr2 are not identical\n");

    if(!compareArray(arr1, arr1Size, arr3, arr3Size)){
        printf("arr1 & arr3 are identical\n");
    } else printf("arr1 & arr3 are not identical\n");
    
    return 0;
}

void printArray(int * arr, int arrSize){
    int counter;
    for(counter = 0; counter < arrSize; counter++){
        printf("%d ", arr[counter]);
    }
    printf("\n");
}

unsigned char compareArray(int * arr1, int arr1_size, int * arr2, int arr2_size){
    int counter = 0;
    
    if(arr1_size != arr2_size) return 1;

    for(counter = 0; counter < arr1_size; counter++){
        if(arr1[counter] != arr2[counter]) return 1;
    }

    return 0;
}

