
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: poin_lenc.c
 * Brief: This application is to Calculate the length of the string using a pointer.
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
    char str[100];
    char *ptr;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') 
    {
        len++;
        ptr++;
    }

    printf("Length of the givrn string is: %d\n", len);

     return 0;
}

// Program End
