/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: Write a C function to swap the contents of two arrays 
  with the same length using pointers
====================================================================
*/

#include <stdio.h>

#define nums1Size 10
#define nums2Size nums1Size

void getArray(int *, size_t);
void printArray(int *, size_t);
void swapTwoNumbers(int * num1, int * num2);
void swapArrays(int * nArry1, int * nArray2, size_t nSize);

int main(void){
    int nums1[nums1Size], nums2[nums2Size];
    
    printf("Enter your first %d number/s: ", nums1Size);
    getArray(nums1, nums1Size);

    printf("Enter your second %d number/s: ", nums2Size);
    getArray(nums2, nums2Size);

    printf("Before Swapping:\n");
    printf("nums1: ");
    printArray(nums1, nums1Size);
    printf("nums2: ");
    printArray(nums2, nums2Size);

    swapArrays(nums1, nums2, nums1Size);
    printf("After Swapping:\n");
    printf("nums1: ");
    printArray(nums1, nums1Size);
    printf("nums2: ");
    printArray(nums2, nums2Size);
    

    return 0;
}

void getArray(int * nArray, size_t nSize){
    size_t indexCounter;
    for(indexCounter = 0; indexCounter < nSize; indexCounter++){
        scanf("%d", &nArray[indexCounter]);
    }
}


void printArray(int * nArray, size_t nSize){
    size_t indexCounter;
    for(indexCounter = 0; indexCounter < nSize; indexCounter++){
        printf("%d ", nArray[indexCounter]);
    }
    printf("\n");
}

void swapTwoNumbers(int * num1, int * num2){
    *num1 ^= *num2;
    *num2 ^= *num1;
    *num1 ^= *num2;
}

void swapArrays(int * nArry1, int * nArray2, size_t nSize){
    size_t indexCoutner;

    for(indexCoutner = 0; indexCoutner < nSize; indexCoutner++){
        swapTwoNumbers(nArry1+indexCoutner, nArray2+indexCoutner);
    }
}