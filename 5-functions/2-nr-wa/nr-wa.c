/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: nr-wa.c
 * Brief: This application is to add two numbers using user defined function sum of no return type and arguments are passing to this function from main().Call this user defined sum function from main().
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include "math.h"

// Main Function
int main()
{
   	 int a,b;
	 printf("Enter 2 numbers: ");
	 scanf("%d %d", &a,&b);
	 sum(a,b);
	 
	 return 0;
}

// Program End
