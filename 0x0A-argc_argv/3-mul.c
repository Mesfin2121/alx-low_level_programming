#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main: print product
 * @argc: number of args
 * @argv: array of args
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
