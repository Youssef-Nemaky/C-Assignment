/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 19/8/2021
* Program/Purpose: A program that reads the radius of a circle and 
calculates the area and circumference then prints the results.
====================================================================
*/
#include <stdio.h>
#include <math.h>

int main(void){
    float radius, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
    
    printf("for a cricle of radius: %.2f\n", radius);
    printf("area = %.2f \t circumference = %.2f", area, circumference);
    
    return 0;
}