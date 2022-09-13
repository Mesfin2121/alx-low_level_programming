#include "main.h"
/**
 * main - entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char charValues[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(charValues[i]);
	}
	_putchar('\n');
	return (0);
}
