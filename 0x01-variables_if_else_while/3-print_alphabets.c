#include<stdio.h>
/**
 * main - entry point
 * Description: prints small letter,upper letter and dollar sign
 * Return: Always 0 (Success)
 */
int main(void)
{
	int smallLetter, upperLetter;

	smallLetter = 97;
	upperLetter = 65;

	while (smallLetter < 123)
	{
	putchar(smallLetter);
	smallLetter++;
	}
	while (upperLetter < 91)
	{
	putchar(upperLetter);
	upperLetter++;
	}
	putchar(36);
	return (0);
}
