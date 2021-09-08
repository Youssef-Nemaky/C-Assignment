/*
====================================================================
* Authour: Youssef El-Nemaky
* Date: 7/9/2021
* Program/Purpose: C Function to calculate the difference between two 
  time periods using structures.
====================================================================
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
} time_period;

void calcTimeDiff(time_period * t1, time_period * t2, time_period * timeDiff);
void getTime(time_period * t);

int main(void){
    time_period t1, t2, timeDiff;
    
    printf("Enter your first time\n");
    getTime(&t1);

    printf("Enter your second time\n");
    getTime(&t2);

    calcTimeDiff(&t1, &t2, &timeDiff);
    printf("differnce in time is:\n");
    printf("%hhu:%hhu:%hhu - %hhu:%hhu:%hhu = %hhu:%hhu:%hhu",
     t1.hours, t1.minutes, t1.seconds,
     t2.hours, t2.minutes, t2.seconds,
     timeDiff.hours, timeDiff.minutes, timeDiff.seconds);
    
    return 0;
}

void calcTimeDiff(time_period * t1, time_period * t2, time_period * timeDiff){
    timeDiff->hours = abs(t1->hours - t2->hours);
    timeDiff->minutes = abs(t1->minutes - t2->minutes);
    timeDiff->seconds = abs(t1->seconds - t2->seconds);
}


void getTime(time_period * t){
    printf("Hours: ");
    scanf("%hhu", &(t->hours));
    
    printf("Minutes: ");
    scanf("%hhu", &(t->minutes));
    
    printf("Seconds: ");
    scanf("%hhu", &(t->seconds));
}
