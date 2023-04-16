/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_read.c
 * Brief: This application is to read an existing file
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com  )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
*********************************************************************************************/

// Header File
#include <stdio.h>
#include <stdlib.h>

// Main Function
int main()
{
     FILE *fp=NULL;
	char str[50];
     char filename[100];

     printf("Enter filename: ");
     scanf("%s", filename);

     fp = fopen(filename, "r");

	if (fp==NULL)
	{
		printf("Error");
		exit(1);
	}

	while(!feof(fp))
	{
        fgets(str,9,fp);
        printf("%s",str);
	}
     printf("\n");

	fclose(fp);
     return 0;
}

// Program End
