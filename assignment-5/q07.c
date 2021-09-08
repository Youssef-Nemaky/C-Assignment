 /*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 8/9/2021
* Program/Purpose:  Create enum type called fan_level it shall have three values 
  Level1, Level2 and Level3. This enum shall be used to 
  control the level of the fan
====================================================================
*/

#include <stdio.h>

typedef enum{
    Level1 = 1,
    Level2,
    Level3,
} fan_level;

int main(void){
    int level;
    fan_level fanLevel;
    
    printf("Enter your fan level (1-3): ");
    scanf("%d", &level);    
    fanLevel = level;

    switch (fanLevel)
    {
    case Level1:
        printf("Your fan level is currently set to Level1\n");
        break;
    case Level2:
        printf("Your fan level is currently set to Level2\n");
        break;
    case Level3:
        printf("Your fan level is currently set to Level3\n");
        break;
    default:
        printf("You've entered a wrong fan level\n");
        break;
    }
    return 0;
}

 
 
