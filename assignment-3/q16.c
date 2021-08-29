/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 29/8/2021
* Program/Purpose: a C function that takes an array as input and reverse it. 
  Example:
  Input : 1,2,3,4,5
  Output: 5,4,3,2,1
====================================================================
*/

#include <stdio.h>

#define numsSize 10

void reverseArray(int *, int);

int main(void){
    int nums[numsSize], counter;

    printf("Enter your %d number/s: ", numsSize);
    for(counter = 0; counter < numsSize; counter++){
        scanf("%d", &nums[counter]);
    }

    reverseArray(nums, numsSize);
    printf("After Reversing:\n");
    for(counter = 0; counter < numsSize ; counter++){
        printf("%d ", nums[counter]);
    }

    return 0;
}

void reverseArray(int * passedArray, int arraySize){
    int counter;
    for(counter = 0; counter < arraySize / 2; counter++){
        passedArray[counter] = passedArray[counter] ^ passedArray[arraySize - counter - 1];
        passedArray[arraySize - counter - 1] = passedArray[counter] ^ passedArray[arraySize - counter - 1];
        passedArray[counter] = passedArray[counter] ^ passedArray[arraySize - counter - 1];
    }
}