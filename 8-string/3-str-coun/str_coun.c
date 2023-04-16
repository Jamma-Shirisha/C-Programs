/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: This application is to count num of vowels,consonents and total alphabets in given string "How are you".
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>
#include<ctype.h>
// Main Function
int main()
{
    char str[] = "How are you";
    int vowels = 0, consonants = 0, alphabets = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha(str[i])) 
        {
            alphabets++;
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

     printf("The given string is: %s\n",str);
     printf("Number of alphabets in given string: %d\n", alphabets);
     printf("Number of vowels in given string: %d\n", vowels);
     printf("Number of consonants in given string: %d\n", consonants);
    

     return 0;
}

// Program End
