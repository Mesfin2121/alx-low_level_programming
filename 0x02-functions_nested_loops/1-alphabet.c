#include "putcharinclude.h"
/**
 * Print_alphabet - lowercase letter
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}