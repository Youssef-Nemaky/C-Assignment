/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 26/8/2021
* Program/Purpose: a program that computes the nth term of the geometric 
  series:
  1, 3, 9, 27, …
  Run the program to compute the 10th term of the given series.
====================================================================
*/

#include <stdio.h>

int findInSeriesLoop(int);
int findInSeriesEquation(int);

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
    printf(" term of the series is %d using loops method\n", findInSeriesLoop(number));
    printf("& %d using equation method", findInSeriesLoop(number));
    return 0;
}

int findInSeriesLoop(int position){
    int counter = 1, ans = 1;
    while(counter != position){
        ans *= 3;
        counter++;
    }
    return ans;
}

int findInSeriesEquation(int position){
    /*
    We know the Arithmetic Progression series is like = 2, 5, 8, 11, 14 …. … 
    In this series 2 is the stating term of the series . 
    Common difference = 5 – 2 = 3 (Difference common in the series). 
    so we can write the series as :
    t1 = a1 
    t2 = a1 + (2-1) * d 
    t3 = a1 + (3-1) * d 
    . 
    . 
    . 
    tN = a1 + (N-1) * d 
    */
    return 1 * (position - 1) * 3;
}