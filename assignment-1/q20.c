/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to display a full pyramid using stars
  pattern.
    *
   ***
  *****
 *******
*********
====================================================================
*/

#include <stdio.h>

int main(void){
    int numberOfRows, rowsCoutner, whiteSpaceCounter, starCounter;

    printf("Enter number of rows: ");
    scanf("%d", &numberOfRows);

    for(rowsCoutner = 1; rowsCoutner <= numberOfRows; rowsCoutner++){
        for(whiteSpaceCounter = 0; whiteSpaceCounter < numberOfRows - rowsCoutner; whiteSpaceCounter++){
            printf(" ");
        }

        for(starCounter = 0; starCounter < (2 * (rowsCoutner - 1) + 1); starCounter++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}