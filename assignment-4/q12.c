/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 6/9/2021
* Program/Purpose: Array that contains integer values, some of these 
  values are repeated with an even number of repetitions, 
  and only one value is repeated with an odd number of 
  repetitions. Write a C function that’s take the array as 
  input and the array size and return the number which has 
  odd numbers of repetitions.
====================================================================
*/

#include <stdio.h>

size_t calcOccur(int * nArray, unsigned int nSize, int number);
int findOddOccurence(int * nArray, unsigned int nSize);

int main(void){
    int nums1[] = {2,2,2,1,1,1,1,5,5,5,5,4,4}; //Here 2 is the only letter that has odd occurences
    int nums2[] = {2,2,1,1,1,5,5,5,5,4,4}; //Here 1 is the only letter that has odd occurences
    int nums3[] = {2,2,1,1,5,5,5,5,4,4,4}; //Here 4 is the only letter that has odd occurences
    int nums4[] = {2,2,1,1,5,5,5,5,4,4}; //Here there is no number with odd occurences
    int foundAt;

    foundAt = findOddOccurence(nums1, sizeof(nums1) / sizeof(*nums1));
    if(foundAt != -1){
        printf("the number which has odd occurences in num1 is: %d\n", nums1[foundAt]);
    } else printf("the number with odd occurnces was not found\n");

    foundAt = findOddOccurence(nums2, sizeof(nums2) / sizeof(*nums2));
    if(foundAt != -1){
        printf("the number which has odd occurences in num2 is: %d\n", nums2[foundAt]);
    } else printf("the number with odd occurnces was not found\n");

    foundAt = findOddOccurence(nums3, sizeof(nums3) / sizeof(*nums3));
    if(foundAt != -1){
        printf("the number which has odd occurences in num3 is: %d\n", nums3[foundAt]);
    } else printf("the number with odd occurnces was not found\n");

    foundAt = findOddOccurence(nums4, sizeof(nums4) / sizeof(*nums4));
    if(foundAt != -1){
        printf("the number which has odd occurences in num4 is: %d\n", nums4[foundAt]);
    } else printf("the number with odd occurnces was not found\n");

    return 0;
}

int findOddOccurence(int * nArray, unsigned int nSize){
    unsigned int counter = 0;
    for(counter = 0; counter < nSize; counter++){
        if(calcOccur(nArray, nSize, nArray[counter]) % 2) return counter;
    }
    return -1;
}

size_t calcOccur(int * nArray, unsigned int nSize, int number){
    unsigned int i, counter = 0;
    for(i = 0; i < nSize; i++){
        if(nArray[i] == number) counter++;
    }
    return counter;
}