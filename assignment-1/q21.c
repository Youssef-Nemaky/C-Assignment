/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to display cross or X-shape using stars
  pattern.
*     *
 *   * 
  * *
   *
  * *
 *   *
*     *
====================================================================
*/

#include <stdio.h>


int main(void){
    int numberOfRows, rowsCoutner, columnCounter;

    printf("Enter number of rows: ");
    scanf("%d", &numberOfRows);

    for(rowsCoutner = 0; rowsCoutner < numberOfRows; rowsCoutner++){
        for(columnCounter = 0; columnCounter < numberOfRows; columnCounter++){
            if(rowsCoutner == columnCounter || (rowsCoutner + columnCounter) == (numberOfRows - 1)){
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}