/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Format Specifier
 * Brief: c program using format specifier in printf statement for int ,char,float,double and string
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 21.03.2023
 *
*********************************************************************************************/

// Header File
#include<stdio.h>

// Main Function
int main()
{
     int integer = 123456;
     char character = 'A';
     float float_num = 3.2;
     double double_num = 987.123456;
     char string[] = "RuggedBoard";
     printf("Integer is : %d\n", integer);
     printf("character is : %c\n", character);
     printf("Float is : %f\n", float_num);
     printf("Double is : %lf\n", double_num);
     printf("String is : %s\n", string);

     return 0;
}

// Program End
