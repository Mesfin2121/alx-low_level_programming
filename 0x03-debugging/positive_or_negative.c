#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - entry point
 * This code checks the postive number,negitve number and zero
 * @n: Inputs any number
 * Return: void
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
}
