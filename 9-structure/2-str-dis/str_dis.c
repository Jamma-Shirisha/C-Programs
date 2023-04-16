/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_dis.c
 * Brief: This application is to add two distances in the inch-feet system using structure
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct 
{
    int feet;
    float inches;
} 
distance;

distance addDistances(distance d1, distance d2);

// Main Function
int main()
{
     distance dist1, dist2, sum;

     printf("For the first distance:\n");
     printf("Enter feet: ");
     scanf("%d", &dist1.feet);
     printf("Enter inches: ");
     scanf("%f", &dist1.inches);

     printf("For the second distance:\n");
     printf("Enter feet: ");
     scanf("%d", &dist2.feet);
     printf("Enter inches: ");
     scanf("%f", &dist2.inches);

     sum = addDistances(dist1, dist2);

     printf("Sum of distances = %d feet %f inches\n", sum.feet, sum.inches);

     return 0;
}

distance addDistances(distance d1, distance d2) 
{
    distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12)
    {
        result.inches -= 12;
        result.feet++;
    }

    return result;
}


// Program End
