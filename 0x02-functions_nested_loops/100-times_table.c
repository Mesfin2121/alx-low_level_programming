#include "main.h"
/**
 * print_times_table - print table
 * @num: number of times
 * Return: void
 */
void print_times_table(int num)
{
	int r, c, product;

	if (num >= 0 && num < 15)
	{
		for (r = 0; r <= num; r++)
		{
			for (c = 0; c <= num; c++)
			{
				product = r * c;

				if (c == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
