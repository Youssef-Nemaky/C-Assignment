/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 5/9/2021
* Program/Purpose: Write a c function to SWAP two pointers.
  Hint: use pointer to pointer as a function argument.
====================================================================
*/

#include <stdio.h>

void swapPointers(int **, int **);

int main(void){
    int num1,num2;
    int * num1Ptr = &num1, * num2Ptr = &num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Before Swapping:\n");
    printf("num1Ptr points to address %p\nnum2Ptr points to address %p\n", num1Ptr, num2Ptr);
    printf("the value that num1Ptr points to is: %d\the value that num2Ptr points to is: %d\n", *num1Ptr, *num2Ptr);
    
    swapPointers(&num1Ptr, &num2Ptr);
    printf("After Swapping:\n");
    printf("num1Ptr points to address %p\nnum2Ptr points to address %p\n", num1Ptr, num2Ptr);
    printf("the value that num1Ptr points to is: %d\the value that num2Ptr points to is: %d\n", *num1Ptr, *num2Ptr);
    
    return 0;
}


void swapPointers(int ** firstPtr, int ** secondPtr){
    int * temp;
    temp = *firstPtr;
    *firstPtr = *secondPtr;
    *secondPtr = temp;
}

