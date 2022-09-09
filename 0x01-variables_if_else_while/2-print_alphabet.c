#include<stdio.h>
/**
 * main - Entry point
 * Description: Print the lowwer case letters
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int lowerCase;

	lowerCase = 97;

	while (lowerCase < 123)
	{
	putchar(lowerCase);
	lowerCase++;
	}
	putchar(10);

	return (0);
}
