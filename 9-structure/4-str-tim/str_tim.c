/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_tim.c
 * Brief: This application is to Calculate Difference Between Two Time Periods
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct 
{
    int hours;
    int minutes;
    int seconds;
} timePeriod;

// Main Function
int main()
{
    timePeriod t1, t2, diff;

    printf("Enter start time:\n");

    printf("Enetr Hours, Minutes and Seconds: ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("\nEnter stop time:\n");

    printf("Enetr Hours, Minutes and Seconds: ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Calculate difference between time periods
    if (t2.seconds > t1.seconds) 
    {
        t1.minutes--;
        t1.seconds += 60;
    }

    diff.seconds = t1.seconds - t2.seconds;

    if (t2.minutes > t1.minutes) 
    {
        t1.hours--;
        t1.minutes += 60;
    }

    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;

    // Print difference between time periods
    printf("\nDifference between time periods: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

     return 0;
}

// Program End
