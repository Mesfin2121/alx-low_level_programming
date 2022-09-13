#include "main.h"
/**
 * _islower - lower case check
 * @c: c is ascii
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
