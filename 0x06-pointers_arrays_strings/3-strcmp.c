#include <stdio.h>

/**
 * _strcmp - compares two string
 * @s1: first param
 * @s2: second param
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
