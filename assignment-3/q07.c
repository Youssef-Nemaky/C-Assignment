/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 25/8/2021
* Program/Purpose: a program that computes the nth term of the arithmetic 
  series:
  1, 3, 5, 7, 9, …
  Run the program to compute the 100th term of the given series.
====================================================================
*/

#include <stdio.h>

int findInSeries(int);

int main(void){
    int number;

    printf("Enter your the nth number: ");
    scanf("%d", &number);

    printf("the %d", number);
    switch (number % 10)
    {
    case 1:
        printf("st");
        break;
    case 2:
        printf("nd");
        break;
    case 3:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" term of the series is %d", findInSeries(number));

    return 0;
}

int findInSeries(int position){
    int counter = 1, ans = 1;
    while(counter != position){
        ans += 2;
        counter++;
    }
    return ans;
}