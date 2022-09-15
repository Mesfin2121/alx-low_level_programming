#include "main.h"
/**
 * print_line - print dash
 * @n: input n
 * Return: void
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
