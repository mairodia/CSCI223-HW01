// ==============================================================================================
// File: minmax.c (Spring 2018)
// ==============================================================================================
// Programmer: Jennifer King
// Professor: Scott Edwards
// Date: 2/5/2018
// Class: CSCI 223F | T/R 4:30PM
// Description:
// 	This program reads integers from the user until the user is finished, and then 
//	displays the min and max integers.
// ===============================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// == main ========================================================================================
//
// ================================================================================================
int main(void)
{
	int intVal, check, min, max;
	check = intVal;
	min = INT_MAX;
	max = INT_MIN;
	
	printf("Enter some integer values, EOF to quit...\n");
	for(;;)
	{
		if(1 != scanf("%d", &intVal))
		{
			printf("Error extracting an int from stdin, terminating program...\n");
			break;
		}
		if(intVal >= max)
		{
			max = intVal;
		}
		if(intVal <= min)
		{
			min = intVal;
		}
	}
	if(check == intVal)
	{
		printf("No integer values were read from stdin.\n");
	}
	else
	{
		printf("The minimum was %d and the maximum was %d\n", min, max);
	}
	return 0;
}
