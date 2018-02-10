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

#define FALSE		0
#define TRUE		0

// == main ========================================================================================
//
// ================================================================================================
int main(void)
{
	auto int bDataRead = FALSE;
	auto int intVal;
	auto int min;
	auto int max;
	auto int result;
	
	printf("Enter some integer values, EOF to quit...\n");
	
	do	{
			result = scanf("%d", &intVal);
			if(1 != result)
			{
				break;
			}
			if(FALSE == bDataRead)
			{
				min = max = intVal;
				bDataRead = TRUE;
			}
			else if(intVal < min)
			{
				min = intVal;
			}
			else if(intVal > max)
			{
				max = intVal;
			}
		} while (1);
	
	if(EOF != result)
	{
		printf("Error extracting an int from stdin, terminating program...");
	}
	
	if(FALSE == bDataRead)
	{
		printf("No integer values were read from stdin.\n");
	}
	
	else
	{
		printf("The minimum was %d and the maximum was %d\n", min, max);
	}
	
	return 0;
} //end of main
