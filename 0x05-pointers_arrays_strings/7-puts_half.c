#include "main.h"

/**
 * puts_half - prints
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
			_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
