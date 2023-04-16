/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_palin.c
 * Brief: This application is to check whether given string is palindrome or not
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>
// Main Function
int main()
{
    char str[100];
    int i, j;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) 
    {
        printf("%s is a palindrome.\n", str);
    } 
    else 
    {
        printf("%s is not a palindrome.\n", str);
    }

     return 0;
}

// Program End
