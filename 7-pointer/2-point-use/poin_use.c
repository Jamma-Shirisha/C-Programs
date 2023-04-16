/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: poin_use.c
 * Brief: This application is to demonstrate the use of &(address of) and *(value at address) operator.
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     
     int m = 300;
     float fx = 300.600006;
     char cht = 'z';

     int *m1;
     float *fx1;
     char *cht1;

     m1=&m;
     fx1=&fx;
     cht1=&cht;

     printf("Using & operator :\n");
     printf("address of m = %p\n",&m);
     printf("address of fx = %p\n",&fx);
     printf("address of cht = %p\n\n",&cht);

     printf("Using & and * operator :\n");
     printf("value at address of m = %d\n",*m1);
     printf("value at address of fx = %f\n",*fx1);
     printf("value at address of cht = %c\n\n",*cht1);

     printf("Using only pointer variable :\n");
     printf("address of m = %p\n", m1);
     printf("address of fx = %p\n",fx1);
     printf("address of cht = %p\n\n",cht1);

     printf("Using only pointer operator :\n");
     printf("value at address of m = %d\n",*m1);
     printf("value at address of fx = %f\n",*fx1);
     printf("value at address of cht = %c\n\n",*cht1);

     return 0;
}

// Program End
