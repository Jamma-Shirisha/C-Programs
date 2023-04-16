/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil.cr.c
 * Brief: This application is create and store information in a text file
 * Author: Shirisha Jamma  ( jammashirisha2001@gmail.com )
 * Title: Project Engineer
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
	char ch;
	fp=fopen("myfile.txt","w+");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fputs("Welcome to Rugged Board\n",fp);
	rewind(fp);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);

     return 0;
}

// Program End
