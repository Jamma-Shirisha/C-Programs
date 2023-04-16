/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: BitWiseOperator.c
 * Brief: This apllication is to show usage of bitwise operators & , | ,  ^ , ~ , << , >>
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
     
        unsigned int a = 50;
        unsigned int b = 5;

        unsigned int d = a | b;
        printf("Binary OR Operator of a and b is= %d\n", d);

        unsigned int c = a & b;
        printf("Binary AND Operator of a and b is= %d\n", c);

        unsigned int e = a ^ b;
        printf("Binary XOR Operator of a and b is = %d\n", e);

        unsigned int f = ~a;
        printf("Binary Ones Complement Operator of a is = %d\n",f);

        unsigned int g = a<<2;
        printf("Binary Left Shift Operator of a is = %d\n", g);

        unsigned int h = a>>2;
        printf("Binary Right Shift Operator of a is =%d\n", h);
     return 0;
}

// Program End
