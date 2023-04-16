
 

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: arr-merge.c
 * Brief: This application is to print one dimensional array after merge two one dimensional array, take size and elements of first and sec array from user
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
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("The merged array is:\n");
    for(i = 0; i < n1+n2; i++) 
    {
        printf("%d ", merged[i]);
    }

     return 0;
}

// Program End
