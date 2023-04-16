/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Size of primitive datatypes.
 * Brief: c program to print the size of all primitive datatypes.
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
     
     printf("Size of 'int' is           = %ld bytes\n", sizeof(int));
     printf("Size of 'unsigned int'is   = %ld bytes\n", sizeof(unsigned int));
     printf("Size of 'long' is          = %ld bytes\n", sizeof(long int));
     printf("Size of 'long long int' is = %ld bytes\n", sizeof(long long int));
     printf("Size of 'float' is         = %ld bytes\n", sizeof(float));
     printf("Size of 'double' is        = %ld bytes\n", sizeof(double));
     printf("Size of 'long double' is   = %ld bytes\n", sizeof(long double));
     return 0;
}

// Program End
