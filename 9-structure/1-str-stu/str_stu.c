
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_stu.c
 * Brief: This applicatio is to store information of student using structure
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct 
{
    char name[50];
    int rollNo;
    float marks;
} 
student;

// Main Function
int main()
{
    student s;

    // Read information for student
    printf("Enter student information:\n");

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Print information for student
    printf("\nDisplaying student information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

     return 0;
}

// Program End
