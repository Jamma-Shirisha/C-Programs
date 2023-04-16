
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_num.c
 * Brief: This application is to Find the Number of Lines in a Text File
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
     int line_count = 0;

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
          if (ch == '\n') 
          {
               line_count++;
          }
     }

     line_count=line_count+1;

     printf("Number of lines: %d\n", line_count);

     fclose(fp);
     return 0;
}

// Program End
