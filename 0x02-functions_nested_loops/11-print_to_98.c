#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print 98
 * @num: starting number
 */
void print_to_98(int num)
{
	int i;

	if (num < 98)
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (num > 98)
	{
		for (i = num; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
