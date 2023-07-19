#include <stdlib.h>
#include "list.h"

/**
 * dlistint_len - Counts the numbers of elements in doubly linked list
 * @h: The double linked list to count
 *
 * Return: Number of elements in doubly linked list
 */
size_t dlist_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
