/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_togg.c
 * Brief: This application is to toggle the case of the given string "RUggEd bOaRD"
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Main Function
int main() {
    char str[] = "RUggEd bOaRD";
    int len = strlen(str);
    
    for(int i=0; i<len; i++) 
    {
        if(isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        } 
        else if(islower(str[i])) 
        {
            str[i] = toupper(str[i]);
        }
    }
    
    printf("Toggled string: %s\n", str);
    
    return 0;
}

// Program End
