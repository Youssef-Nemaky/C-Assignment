/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 22/8/2021
* Program/Purpose: Given two integers: L and R, Find the maximal value of A xor B where
  A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
  Input format: the input contains two lines first line contains L and next
  line contains R.
  Output format: The maximum value of A xor B
====================================================================
*/

#include <stdio.h>

int main(void){
    int l, r, i, j, max = -1;

    printf("Enter your two numbers: ");
    scanf("%d %d", &l, &r);

    for(i = l; i <= r; i++){
      for(j = i; j <= r; j++){
        printf("%d ^ %d = %d\n", i, j, i ^ j);
        if(max < (i ^ j)){
          max = i ^ j;
        }
      }
    }

    printf("The maximum value of XOR operations is: %d", max);

    return 0;
}