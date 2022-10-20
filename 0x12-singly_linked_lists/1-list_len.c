#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: head of linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
