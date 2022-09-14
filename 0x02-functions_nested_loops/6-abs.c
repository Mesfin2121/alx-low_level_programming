#include "main.h"
/**
 * _abs - absolute value
 * @i: input integers
 * Return: Always freturn 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-1 * i);
	}
	else
	{
		return (0);
	}
}
