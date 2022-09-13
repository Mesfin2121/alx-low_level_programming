#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for(count = 0; count < 10; count++)
	{
		letter = 'a';
		
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
