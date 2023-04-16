/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Simpleif.c
 * Brief: This application is to check the entered number is greater than 20.
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a;
     printf("Enter a number: ");
     scanf("%d",&a); 
        if( a > 20 ) 
        { 

                printf("%d is greater than 20\n",a ); 

        } 
        printf("value of a is : %d\n", a);
     
     return 0;
}

// Program End
