#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches
 * @s: string
 * @accept: chars to compare
 * Return: pointer from
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\n'; i++)
	{
		for (j = 0; *(accept + j) != '\n'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
