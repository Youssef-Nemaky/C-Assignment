/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 30/8/2021
* Program/Purpose: a C function to return an array containing the values 
  between two 8-bits unsigned integers IN DESCENDING ORDER 
  EXCLUSIVE. The function takes 2 values (LowerValue and 
  UpperValue), it shall determine the values in between, and then 
  arrange the sequence in descending order excluding the upper 
  and lower values.
  If the LowerValue is greater than or equal the UpperValue, return 
  an array of 2 elements, both containing value = 0xFF
  Example:
  Input: LowerValue=2 and UpperValue=5
  Output:
  Output Array=4,3
  Output Array Size=2
====================================================================
*/

#include <stdio.h>
#include <stdlib.h>

unsigned char * createArray(unsigned char, unsigned char, unsigned char *);

int main(void){
    unsigned char lowerValue = 2, upperValue, returnArraySize = 0, counter;
    unsigned char * returnArray;

    printf("Enter your upper value: ");
    scanf("%hhu", &lowerValue);

    printf("Enter your lower value: ");
    scanf("%hhu", &upperValue);
    
    returnArray = createArray(lowerValue, upperValue, &returnArraySize);
    printf("Output Array: ");
    for(counter = 0; counter < returnArraySize; counter++){
        printf("%hhu ", returnArray[counter]);
    }

    printf("\nOutput Array Size = %hhu", returnArraySize);
    
    free(returnArray);

    return 0;
}

unsigned char * createArray(unsigned char lowerV, unsigned char upperV, unsigned char * returnArrSize){
    unsigned char * returnArray, counter;
    if(lowerV >= upperV){
        returnArray = (unsigned char *)malloc(2 * sizeof(unsigned char));
        *returnArrSize = 2;
        returnArray[0] = 0xff;
        returnArray[1] = 0xff;
    } else {
        returnArray = (unsigned char *)malloc((upperV - lowerV - 1) * sizeof(unsigned char));
        *returnArrSize = upperV - lowerV - 1;
        for(counter = 0; counter < *returnArrSize; counter++, upperV--){
            returnArray[counter] = upperV - 1;
        }
    }
    return returnArray;
}