/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 7/9/2021
* Program/Purpose: C Program to add two distances (inch-feet) using 
  structure and display the result.
====================================================================
*/

#include <stdio.h>

typedef struct{
    int real;
    int img;
} complexNum;

void sumComplex(complexNum * n1, complexNum * n2, complexNum * res);

int main(void){
    complexNum n1, n2, n3;

    printf("Enter your first complex number\n(real followed by a space eg: 5-2j -> 5 -2): ");
    scanf("%d %d", &(n1.real), &(n1.img));
    
    printf("Enter your second complex number\n(real followed by a space eg: 5-2j -> 5 -2): ");
    scanf("%d %d", &(n2.real), &(n2.img));
    
    sumComplex(&n1, &n2, &n3);

    printf("  %d + (%d)j\n+\n  %d + (%d)j\n= %d + (%d)j", n1.real, n1.img, n2.real, n2.img, n3.real, n3.img);
    return 0;
}

void sumComplex(complexNum * n1, complexNum * n2, complexNum * res){
    res->real = n1->real + n2->real;
    res->img = n1->img + n2->img;
}