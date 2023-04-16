/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_cmp.c
 * Brief: This application is to compare two strings,if user enter "danger" then print "entered correct password" else print "wrong password"
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>

// Main Function
int main()
{
    char pword[20];
    char Password[] = "Vikram";

    printf("Enter your password: ");
    scanf("%s", pword);

    if (strcmp(pword, Password) == 0) 
    {
        printf("Entered correct password.\n");
    } 
    else 
    {
        printf("Wrong password.\n");
    }

     return 0;
}

// Program End
