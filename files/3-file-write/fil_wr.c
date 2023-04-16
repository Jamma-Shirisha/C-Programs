/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_wr.c
 * Brief: This application is to write multiple lines in a text file.
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to file (press Enter on an empty line to stop):\n");

    // allow user to input multiple lines of text
    while (fgets(text, sizeof(text), stdin) != NULL) {
        if (text[0] == '\n') {
            break; // stop when user inputs an empty line
        }
        fprintf(fp, "%s", text); // write line to file
    }

    fclose(fp);
    printf("File written successfully.\n");

    return 0;
}

// Program End
