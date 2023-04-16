
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: poin_dec.c
 * Brief: This application is to show the basic decleration of pointer
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
    int m = 10,n ,o;
    int *z;

    z = &m;

     printf("z stores the address of m  = %p\n",z);
     printf("*z stores the value of m = %d\n",*z);
     printf("&m is the address of m = %p\n",&m);
     printf("&n stores the address of n = %p\n",&n);
     printf("&o  stores the address of o = %p\n",&o);
     printf("&z stores the address of z = %p\n",&z);


     return 0;
}

// Program End
