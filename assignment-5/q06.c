/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 7/9/2021
* Program/Purpose: Create Union type called family_name it shall have two 
  members first_name and last_name. The two members are 
  array of characters with same size 30. Try to write string in 
  the first member first_name then print the second member 
  last_name plus print the size of the union.
====================================================================
*/

#include <stdio.h>

typedef union {
    char first_name[30];
    char last_name[30];
} family_name ;

int main(void){
    family_name fn;
    
    printf("Enter your first name: ");
    fgets(fn.first_name, 30, stdin);

    printf("last name content is: %s\nsize of the union is %llu", fn.last_name, sizeof(family_name));
    return 0;
}