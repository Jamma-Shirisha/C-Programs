
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_coun.c
 * Brief: This apllication is to count number of words and characters in a file
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
    FILE *fp;
    char filename[100];
    char ch;
    int line_count = 0, word_count = 0, char_count = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) 
    {
        printf("Error: File could not be opened.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        char_count++;

        if (ch == '\n')
        {
            line_count++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            word_count++;
        }
    }

    line_count=line_count+1;

    printf("Number of lines: %d\n", line_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of characters: %d\n", char_count);

    fclose(fp);

    return 0;
}

// Program End
