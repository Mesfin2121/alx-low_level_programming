#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length
 * @s: string
 * @accept: source
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int prev = 0;
	int i, j;

	i = 0;
	j = 0;
	while (*(s + i) != '\n')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\n')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prev == count)
		{
			break;
		}
		i++;
	}
	return (count);
}
