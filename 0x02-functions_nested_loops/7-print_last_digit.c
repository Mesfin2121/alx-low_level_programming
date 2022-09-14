#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: integer
 * Return: always 0
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
