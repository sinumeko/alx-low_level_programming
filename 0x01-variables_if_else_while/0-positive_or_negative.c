#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * print whether the number stored in the variable n is positive or negative.
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else (n < 0)
	{
		printf("%d is negative \n", n);
	
	}
	return (0);

