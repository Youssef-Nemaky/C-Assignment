/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 3/9/2021
* Program/Purpose: C Program to compute sum of the array elements using 
  pointers
====================================================================
*/

#include <stdio.h>

#define numsSize 5

int calcSum(int *, int);
void getArray(int *, unsigned int);

int main(void){
    int sum;
    int nums[numsSize];
    
    printf("Enter your %d number/s: ", numsSize);
    getArray(nums, numsSize);

    sum = calcSum(nums, numsSize);
    printf("total sum of the numbers you entered is: %d", sum);

    return 0;
}

int calcSum(int * passedArr, int passedArrSize){
    int total = 0, counter;
    for(counter = 0; counter < passedArrSize; counter++){
        total += passedArr[counter];
    }
    return total;
}

void getArray(int * arr, unsigned int arrSize){
    unsigned int counter;
    for(counter = 0 ; counter < arrSize; counter++){
        scanf("%d", &arr[counter]);
    }
}