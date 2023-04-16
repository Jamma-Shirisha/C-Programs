#include<stdio.h>
#include "string.h"

void string_case_ul(char* str)
{       
        int i;
	    char a[10];
        for(i=0 ; *str != '\0';str++,i++)
        {
		a[i] = *str + 32;
	    }
        
	    printf("The case changed string is: '%s'\n",a);
} 
