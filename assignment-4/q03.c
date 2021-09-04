/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 4/9/2021
* Program/Purpose: C Program to read 10 integers into an array from user 
  and print them in reversing order using pointers.
====================================================================
*/

#include <stdio.h>

#define numsSize 10

void getArray(int * nArray, size_t nSize);
void printArrayReversed(int *, int);

int main(void){
    int nums[numsSize];

    printf("Enter your %d number/s: ", numsSize);
    getArray(nums, numsSize);

    printf("what you entered in reverse order is: ");
    printArrayReversed(nums,numsSize);

    return 0;
}

void getArray(int * nArray, size_t nSize){
    size_t counter;
    for(counter = 0; counter < nSize; counter++){
        scanf("%d", &nArray[counter]);
    }
}

void printArrayReversed(int * start, int nSize){
    int * end = start + nSize - 1;
    while(end != start){
        printf("%d ", *end);
        end--;
    }
    printf("%d", *end);
}