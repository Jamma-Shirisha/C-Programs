/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_info.c
 * Brief: This application is to Store Information of 5 Students Using Structure
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct {
     int rollNo;
     char name[50];
     float marks;
} student;

// Main Function
int main()
{
     student students[5];

     for (int i = 0; i < 5; i++)
      {
          printf("Enter details for student %d:\n", i+1);

          printf("Roll number: ");
          scanf("%d", &students[i].rollNo);

          printf("Enter First Name: ");
          scanf("%s", students[i].name);

          printf("Enter Marks: ");
          scanf("%f", &students[i].marks);

          printf("\n");
     }

     printf("Displaying Student information:\n");
     for (int i = 0; i < 5; i++)
     {
          printf("Student %d:\n", i+1);
          printf("Roll number: %d\n", students[i].rollNo);
          printf("First Name: %s\n", students[i].name);
          printf("Marks: %.2f\n\n", students[i].marks);
     }

          return 0;
}

// Program End
