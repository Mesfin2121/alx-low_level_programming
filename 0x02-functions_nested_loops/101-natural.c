#include <stdio.h>
/**
 * main - list all natuaral numbers of 3 & 5
 * Return: Always 0
 */
int main(void)
{
	int input, total;

	total = 0;

	for (input = 0; input < 1024; input++)
	{
		if (input % 3 == 0 || input % 5 == 0)
		{
			total += input;
		}
	}
	printf("5%d\n", total);

	return (0);
}
