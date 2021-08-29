/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 29/8/2021
* Program/Purpose: a C function that return the count of the longest 
  consecutive occurrence of a given number in an array.
  Example:
  Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4
====================================================================
*/

#include <stdio.h>

int lco(int *, int, int);

int main(void){
    int Array[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    int numberToSearchFor = 3;

    int longest = lco(Array, sizeof(Array) / sizeof(*Array), numberToSearchFor);
    printf("%d was found %d in a consecutive matter", numberToSearchFor, longest);
    return 0;
}

int lco(int * passedArr, int arrSize, int number){
    int i,j = 0;
    int longest = 0;
    for(i = 0; i < arrSize; i++){
        while((i < arrSize )&& (passedArr[i] == number)){
            j++;
            i++;
        }
        if(longest < j){
            longest = j;
            j = 0;
        }
    }
    return longest;
}
