#include "main.h"

/**
 *_isupper - check uppercase
 * @c: character
 *
 * Return: 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
