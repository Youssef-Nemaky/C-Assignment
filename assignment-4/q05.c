/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: C function to copy all elements of an array into another 
  array using pointers. The two arrays have the same length and types.
====================================================================
*/

#include <stdio.h>

#define nums1Size 10
#define nums2Size nums1Size

void getArray(int * nArray, size_t nSize);
void copyArray(int * firstArray, int * secondArray, int nSize);
void printArray(int * passedArray, int length);

int main(void){
    int nums1[nums1Size], nums2[nums2Size];

    printf("Enter your %d number/s: ", nums1Size);
    getArray(nums1, nums1Size);

    copyArray(nums1, nums2, nums1Size);

    printf("nums2 after copying:\n");
    printArray(nums2, nums2Size);

    return 0;
}

void getArray(int * nArray, size_t nSize){
    size_t counter;
    for(counter = 0; counter < nSize; counter++){
        scanf("%d", &nArray[counter]);
    }
}

void copyArray(int * firstArray, int * secondArray, int nSize){
    int counter;
    for(counter = 0; counter < nSize; counter++){
        secondArray[counter] = firstArray[counter];
    }
}

void printArray(int * passedArray, int length){
    int counter;
    for(counter = 0; counter < length; counter++){
        printf("%d ", passedArray[counter]);
    }
}