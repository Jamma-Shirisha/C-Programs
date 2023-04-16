/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: poin_max.c
 * Brief: This application is to find the maximum number between two numbers using a pointer
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2) 
    {
        printf("%d is the maximum number.", *ptr1);
    } 
    else 
    {
        printf("%d is the maximum number.", *ptr2);
    }

     return 0;
}

// Program End
