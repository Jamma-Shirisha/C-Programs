/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: hi.c
 * Brief: This application is, if user enter "hi" then output print "Hello" else print "not enter hi"
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
    char input[3];
    printf("Enter 'hi': ");
    scanf("%s", input);
    if (strcmp(input, "hi") == 0)
     {
        printf("Hello\n");
     } 
     else 
     {
        printf("Did not enter 'hi'\n");
     }
     return 0;
}

// Program End
