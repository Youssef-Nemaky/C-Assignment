/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: C Program to print all the array elements and the 
  maximum number in array using array of pointers.
====================================================================
*/

#include <stdio.h>

#define numsSize 10

void printArray(int **, int);
int getMax(int ** nArray, int nSize);
void getArray(int * nArray, size_t nSize);

int main(void){
    int nums[numsSize];
    int * numsPointers[numsSize];
    int counter;

    for(counter = 0; counter < numsSize; counter++){
        numsPointers[counter] = nums + counter;
    }

    printf("Enter your %d number/s: ", numsSize);
    getArray(nums, numsSize);

    printArray(numsPointers, numsSize);

    printf("the max element is: %d", nums[getMax(numsPointers, numsSize)]);

    return 0;
}

void getArray(int * nArray, size_t nSize){
    size_t counter;
    for(counter = 0; counter < nSize; counter++){
        scanf("%d", &nArray[counter]);
    }
}


void printArray(int ** nArray, int nSize){
    int counter;
    
    for(counter = 0; counter < nSize; counter++){
        printf("%d ", *nArray[counter]);
    }
    
    printf("\n");
}

int getMax(int ** nArray, int nSize){
    int maxIndex = 0, counter;
    
    if(nArray == NULL) return 0;
    
    for(counter = 0; counter < nSize; counter++){
        if( *nArray[maxIndex] < *nArray[counter] ){
            maxIndex = counter;
        }
    }
    return maxIndex;
}