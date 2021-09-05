/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: C function to get the value of the smallest element in 
  array using pointers
====================================================================
*/

#include <stdio.h>

#define numsSize 10

int getSmallest(int * nArray, int nSize);
void getArray(int * nArray, size_t nSize);

int main(void){
    int nums[numsSize];

    printf("Enter your %d number/s: ", numsSize);
    getArray(nums, numsSize);

    printf("The smallest number of the entered array is: %d", nums[getSmallest(nums, numsSize)]);

    return 0;
}

void getArray(int * nArray, size_t nSize){
    size_t counter;
    for(counter = 0; counter < nSize; counter++){
        scanf("%d", &nArray[counter]);
    }
}

int getSmallest(int * nArray, int nSize){
    int smallestIndex = 0, counter;
    if(nArray == NULL) return 0;

    for(counter = 1; counter < nSize; counter++){
        if(nArray[smallestIndex] > nArray[counter]) smallestIndex = counter;
    }
    return smallestIndex;
}
