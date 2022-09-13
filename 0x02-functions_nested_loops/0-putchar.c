#include "putcharinclude.h"
/**
 * main - entry point
 * Rerurn: Always 0 (Sucess)
 */
int main(void)
{
	char charValues[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(charValues[i]);
	}
	_putchar('\n');
	return (0);
}
