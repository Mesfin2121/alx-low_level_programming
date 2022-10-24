#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct lists_s - singly linked list
 * @n; integer
 * @next: points to next
 *
 * Description: singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
