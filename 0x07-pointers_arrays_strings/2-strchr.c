#include "main.h"
#define NULL 0

/**
 * _strchr - locate a char
 * @s: string
 * @c: charcter
 * Return: pointer to first
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\n')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
