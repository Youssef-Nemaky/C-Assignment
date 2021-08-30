/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 31/8/2021
* Program/Purpose: a C function to find the frequency of characters in a 
  string.
  ->Input the string from the user.
  ->Traverse the string, character by character and store the 
  count of each of the characters in an array.
  -> Print the array that contains the frequency of all the characters.
====================================================================
*/

#include <stdio.h>
#include <stdlib.h>

#define strSize 51

void printFrequency(char * str,unsigned int string_size);
unsigned int strLength(char * passedStr);

int main(void){
    char str[strSize];
    
    printf("Enter your string: ");
    gets(str);

    printFrequency(str, strLength(str));
    return 0;
}

void printFrequency(char * str,unsigned int string_size){
    int i,j;
    unsigned int * freq = (unsigned int *)malloc(string_size * sizeof(unsigned char));

    for(i = 0; i < string_size; i++){
        freq[i] = 1;
        for(j = 0; j < string_size; j++){
            if(i == j) continue;
            if(str[i] == str[j]){
                freq[i]++;
            }
        }
    }
    for(i = 0; i < string_size; i++){
        printf("%u", freq[i]);
    }
    free(freq);
}

unsigned int strLength(char * passedStr){
    unsigned int counter = 0;
    while(passedStr[counter] != '\0'){
        counter++;
    }
    return counter;
}  