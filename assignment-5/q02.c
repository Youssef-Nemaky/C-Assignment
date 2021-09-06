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
    float feet;
    float inches;
} distance;

void getDistance(distance * distancePtr);
void sumDistance(distance * d1, distance * d2, distance * d3);

int main(void){
    distance d1, d2, d3;

    getDistance(&d1);
    getDistance(&d2);

    sumDistance(&d1,&d2,&d3);

    printf("d1.feet = %.2f & d1.inches = %.2f\n", d1.feet, d1.inches);
    printf("d2.feet = %.2f & d2.inches = %.2f\n", d2.feet, d2.inches);
    printf("total feet: %.2f\ntotal inches: %.2f", d3.feet, d3.inches);    
    return 0;
}

void getDistance(distance * distancePtr){
    printf("Enter your feet: ");
    scanf("%f", &(distancePtr->feet));
    
    printf("Enter your inches: ");
    scanf("%f", &(distancePtr->inches));
}

void sumDistance(distance * d1, distance * d2, distance * d3){
    d3->feet = (d1->feet) + (d2->feet);
    d3->inches = d1->inches + d2->inches;
    if(d3->inches >= 12.0){
        d3->inches = 0;
        (d3->feet)++;
    }
}