#include <unistd.h>
/**
 * _putchar - characters to display
 * @c: The character to print
 * Return: always 0(sucesss)
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
