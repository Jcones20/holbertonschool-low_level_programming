#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Counts the numbers of elements in doubly linked list
 * @h: The double linked list to count
 *
 * Return: Number of elements in doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}

	return (lenght);
}
#endif
