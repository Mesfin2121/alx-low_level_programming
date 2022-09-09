#include<stdio.h>
/**
 * main - Entry point
 * Description: Print lower case except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase;

	lowerCase = 97;
	while (lowerCase < 123)
	{
	if ((lowerCase != 101) && (lowerCase != 113))
	{
	putchar(lowerCase);
	}
	lowerCase++;
	}
	putchar(10);

	return (0);
}
