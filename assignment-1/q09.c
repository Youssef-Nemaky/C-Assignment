/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 20/8/2021
* Program/Purpose: a program that reads a student grade percentage
  and prints "Excellent" if his grade is greater than or equal
  85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
  for 50, "Fail" for less than 50.
====================================================================
*/
#include <stdio.h>

int main(void){
    float grade;

    printf("Enter your grade: ");
    scanf("%f", &grade);

    if(grade >= 85){
        printf("Excellent");
    } else if (grade >= 75){
        printf("Very Good");
    } else if (grade >= 65){
        printf("Good");
    } else if(grade >= 50){
        printf("Pass");
    } else printf("Fail");
    
    return 0;
}