/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Scanf
 * Brief: c program using scanf get Name,Rollnumber,CGPA from user input and print it.
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 21.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     char name[50];
	printf("Enter your name: ");
	scanf("%s",name);
     int RollNo;
	printf("Enter your RollNo: ");
	scanf("%d",&RollNo);
     double cgpa;
     printf("Enter your CGPA: ");
	scanf("%lf",&cgpa);

     printf("\ndisplay information:\n");
     printf("Name:%s\n",name);
     printf("RollNo:%d\n",RollNo);
     printf("CGPA:%4.2lf\n",cgpa);

     return 0;
}

// Program End
