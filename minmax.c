// ==============================================================================================
// File: minmax.c (Spring 2018)
// ==============================================================================================
// Programmer: Jennifer King
// Professor: Scott Edwards
// Date: 2/5/2018
// Class: CSCI 223F | T/R 4:30PM
// Description:
// 		This program reads integers from the user until the user is finished, and then displays
//		the min and max integers.
// ===============================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
	int x, y, min, max;
	y = x;
	min = INT_MAX;
	max = INT_MIN;
	printf("Enter some integer values, EOF to quite...\n");
	for(;;)
	{
		if(1 != scanf("%d", &x))
		{
			printf("Error extracting an int from stdin, terminating program...\n");
			break;
		}
		if(x >= max)
		{
			max = x;
		}
		if(x <= min)
		{
			min = x;
		}
	}
	if(y == x)
	{
		printf("No integer values were read from stdin.\n");
	}
	else
	{
		printf("The minimum was %d and the maximum was %d\n", min, max);
	}
	return 0;
}
