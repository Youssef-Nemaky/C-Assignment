/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 6/9/2021
* Program/Purpose: C Program to store information (name, id and 
  gpa) for a student using structure and display it.
====================================================================
*/

#include <stdio.h>

typedef struct {
    unsigned int id;
    char name[51];
    float gpa;
} student;

#define studentsArraySize 3

void printStudents(student * st, size_t stSize);

int main(void){
    student studentsArray[studentsArraySize] = {
                                                 {1, "Youssef Mamdoh", 3.15f},
                                                 {2, "d7k al d7kawy", 0.01f},
                                                 {3, "test test" , 2.2f}
                                                };

    printStudents((student *)&studentsArray, studentsArraySize);

    return 0;
}

void printStudents(student * st, size_t stSize){
    size_t counter;
    for(counter = 0; counter < stSize; counter++){
        printf("student No.%u \t Name: %s \t gpa: %.2f\n", (st+counter)->id, (st+counter)->name, (st+counter)->gpa);
    }
}
