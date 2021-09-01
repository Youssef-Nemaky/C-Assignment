/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: Write a C function that calculates the required heater
  activation time
  according to the input temperature of water.
  - if input temperature is from 0 to 30, then required heating time = 7 mins.
  - if input temperature is from 30 to 60, then required heating time = 5 mins.
  - if input temperature is from 60 to 90, then required heating time = 3 mins.
  - if input temperature is more than 90, then required heating time = 1 mins.
  - if temperature is invalid (more than 100), return 0
  Example:
  Input = 10 -> output = 7
  Input = 35 -> output = 5
====================================================================
*/

#include <stdio.h>

int calcActivationTime(int);

int main(void){
    int temperature;

    printf("Enter your temperature: ");
    scanf("%d", &temperature);

    printf("for a temperature of %d, you need time of %d", temperature, calcActivationTime(temperature));
    return 0;
}

int calcActivationTime(int temp){
    int time;
    if(temp > 100){
        time = 0;
    } else if(temp > 90){
        time = 1;
    } else if(temp >= 60){
        time = 3;
    } else if(temp >= 30){
        time = 5;
    } else if (temp >= 0){
        time = 7;
    }
    return time;
}