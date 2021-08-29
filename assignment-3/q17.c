/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 29/8/2021
* Program/Purpose: a C Program for swapping two arrays “A & B” with 
  different lengths. B will be always the smallest array.
  int * Swap (int a_size,int *a,int b_size,int *b)
====================================================================
*/

#include <stdio.h>


int * swap(int , int *, int, int *);
void printArray(int *, int);

int main(void){
  int a[] = {1,2,3,4};
  int b[] = {5,6,7,8,9};
  int aSize = sizeof(a) / sizeof(*a);
  int bSize = sizeof(b) / sizeof(*b);

  printf("Before Swapping\n");
  printf("A array: ");
  printArray(a, aSize);
  printf("\nB array: ");
  printArray(b, bSize);

  swap(aSize, a, bSize, b);
  printf("\nAfter Swapping\n");
  printf("A array: ");
  printArray(a, aSize);

  printf("\nB array: ");
  printArray(b, bSize);
  return 0;
}

int * swap(int a_size, int * a, int b_size, int * b){
  int * temp, counter;
  if(a_size < b_size){
    temp = a;
    a = b;
    b = temp;
    a_size = a_size ^ b_size;
    b_size = a_size ^ b_size;
    a_size = a_size ^ b_size;
  }
  for(counter = 0; counter < b_size; counter++){
    a[counter] = a[counter] ^ b[counter];
    b[counter] = a[counter] ^ b[counter];
    a[counter] = a[counter] ^ b[counter];
  }
  return a;
}

void printArray(int * arrPtr, int arrSize){
  int counter;
  for(counter = 0; counter < arrSize; counter++){
    printf("%d ", arrPtr[counter]);
  }
}