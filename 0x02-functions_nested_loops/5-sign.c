#include "main.h"
/**
 * print_sign - print signs
 * @i: i is an integer
 * Return: 1 if postive,0 if zero,- if negative
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
