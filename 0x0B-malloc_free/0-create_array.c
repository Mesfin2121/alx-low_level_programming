#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: size of array
 * @c: chart to inti
 * Return: Null if size = 0, pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
