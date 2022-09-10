#include<stdio.h>
/**
 * main -entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int number, letter;

	for (number = 48; number < 58; number++)
	{
	putchar(number);
	}
	for (letter = 97; letter < 103; letter++)
	{
	putchar(letter);
	}
	putchar(10);
	return (0);
}
