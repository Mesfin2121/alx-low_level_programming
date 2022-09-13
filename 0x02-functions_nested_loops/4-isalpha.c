#include "main.h"
/**
 * _isalpha - checkthe alphabet
 * @c: c is ascci char
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
