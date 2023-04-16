/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_arr.c
 * Brief: This application is to read the file and store the lines into an array
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100

// Main Function
int main()
{

    FILE *fp;
    char lines[MAX_LINES][100];
    int i = 0;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) 
    {
        printf("Error: File could not be opened.");
        exit(1);
    }

    while (i < MAX_LINES && fgets(lines[i], 100, fp) != NULL) 
    {
        i++;
    }

    printf("The content of the file myfile.txt  are :\n");

    for (int j = 0; j < i; j++) 
    {
        printf("%s", lines[j]);
    }
    printf("\n");

    fclose(fp);
     return 0;
}

// Program End
