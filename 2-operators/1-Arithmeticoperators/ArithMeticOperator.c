/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Arithmetic Operators.
 * Brief: c program to add,subtract,multiply,divide,modulus,increment and decrement the numbers.
 * Author: Shirisha Jamma ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 21.03.2023
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{     
     int a, b, sum, sub, mul, div, mod;
       
	printf("Enter the first number: ");
	scanf("%d", &a);

     printf("Enter the second number: ");
	scanf("%d", &b);

	sum = a + b;
       	printf("Addition       : a+b = %d\n", sum);
      
	sub = a - b;
      	printf("Substraction   : a-b = %d\n", sub);
       
	mul = a * b;
      	printf("Multiplication : a*b = %d\n", mul);
	
	div = a / b;
		printf("Division       : a/b = %d\n", div);
       
	mod = a % b;
      	printf("Modulo Division: %d\n", mod);
       	
	a++;
      	printf("Increment the value of a by 1   : %d\n", a);
	
	b--;
       	printf("Decremented the value of b by 1 : %d\n", b);
	return 0;
}

// Program End
