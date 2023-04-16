/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_add.c
 * Brief: This application is to Add Two Complex Numbers by Passing Structure to a Function
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct 
{
     double real;
     double imag;
} 
     complex;

     complex add(complex a, complex b);

// Main Function
int main()
{    

     complex num1, num2, sum;

     printf("For first complex number:\n");
     printf("Enter the real and imaginary part: ");
     scanf("%lf %lf", &num1.real, &num1.imag);

     printf("For second complex number:\n");
     printf("Enter the real and imaginary part: ");
     scanf("%lf %lf", &num2.real, &num2.imag);

     sum = add(num1, num2);

     printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imag);

     return 0;
     }

     complex add(complex a, complex b) 
     {
     	complex result;
     	result.real = a.real + b.real;
     	result.imag = a.imag + b.imag;
     	
     	return result;
     }

// Program End
