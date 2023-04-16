/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: IfelseLadder.c
 * Brief: This application is to check the greatest among four numbers using elseifLadder.
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
     int a,b,c,d;
     printf("Enter the values of a,b,c,d: ");  

     scanf("%d%d%d%d",&a,&b,&c,&d);    

        if(a>b && a>c && a>d)
        {       
        	printf("%d is the largest\n",a);    

        }
        else if(b>c && b>a && b>d)
        {       
                printf("%d is the largest\n",b);    
        }
        else if(c>d && c>a && c>b)
        {      
                printf("%d is the largest\n",c);    
        }
        else
        {       
                printf("%d is the largest\n",d); 
        } 
     
     return 0;
}

// Program End
