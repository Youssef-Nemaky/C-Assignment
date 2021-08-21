/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 21/8/2021
* Program/Purpose: a program to display inverted half pyramid using
  stars pattern.
  * * * * *
  * * * *
  * * *
  * *
  *
====================================================================
*/

#include <stdio.h>

int main(void){
    int numberOfRows, rowsCoutner, columnsCounter;

    printf("Enter number of rows: ");
    scanf("%d", &numberOfRows);

    for(rowsCoutner = numberOfRows; rowsCoutner >= 1; rowsCoutner--){
        for(columnsCounter = 0; columnsCounter < rowsCoutner; columnsCounter++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}