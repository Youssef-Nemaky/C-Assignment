/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 19/8/2021
* Program/Purpose: e a program that print your name and your grade
in a new line.
====================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float gpa;
    char name[20];

    printf("Enter your name: ");
    gets(name);    

    printf("Enter your gpa: ");
    scanf("%.2f", &gpa);

    printf("Your name is: %s and your gpa is: %f", name, gpa);
    return 0;
}