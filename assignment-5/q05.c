/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 7/9/2021
* Program/Purpose:  C Function to store information (name, id and gpa) for 3 
  students in array of structures using pointers and another 
  function to print all the structures using pointers.
====================================================================
*/

#include <stdio.h>
#include <string.h>

#define nameSize 51

typedef struct{
    char name[nameSize];
    unsigned int id;
    float gpa;
} student;

#define stArraySize 3
#define stPointersArraySize stArraySize

void getStudents(student ** st, size_t stSize);
void printStudents(student ** st, size_t stSize);

int main(void){
    student stArray[stArraySize];
    student * stPointersArray[stPointersArraySize];
    size_t counter;

    for(counter = 0; counter < stPointersArraySize; counter++){
        stPointersArray[counter] = &stArray[counter];
    }

    getStudents(stPointersArray, stPointersArraySize);

    printf("\n\n");
    printStudents(stPointersArray, stPointersArraySize);

    return 0;
}

void getStudents(student ** st, size_t stSize){
    size_t counter;
    char dummy;
    for(counter = 0; counter < stSize; counter++){
        printf("Enter information for student NO.%llu\n", counter + 1);
        
        printf("student name: ");
        if(counter != 0) scanf("%c", &dummy); //to remove space
        /* USE THIS
        fgets(st[counter]->name, nameSize, stdin);
        (st[counter]->name)[strlen(st[counter]->name) - 1] = '\0';
        */
        // OR THIS
        scanf("%[^\n]", st[counter]->name);
        printf("student id: ");
        scanf("%u", &(st[counter]->id));
        
        printf("student gpa: ");
        scanf("%f", &(st[counter]->gpa));
    }
}

void printStudents(student ** st, size_t stSize){
    size_t counter;
    for(counter = 0; counter < stSize; counter++){
        printf("information for student NO.%llu\n", counter + 1);
        printf("student name: %s\n", st[counter]->name);
        printf("student id: %u\n", st[counter]->id);
        printf("student gpa: %.2f\n", st[counter]->gpa);
        printf("\n\n");
    }
}