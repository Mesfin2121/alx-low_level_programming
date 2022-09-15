#include "main.h"

/**
 * _isdigit - check digits
 * @c: char input
 *
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '9')
		return (1);
	return (0);
}
