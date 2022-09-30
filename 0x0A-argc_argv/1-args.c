#include "main.h"
#include <stdio.h>

/**
 * main - print number of args
 * @argc: number of arg
 * @argv: array of args
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
