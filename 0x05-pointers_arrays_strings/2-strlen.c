#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
