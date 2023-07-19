#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - Prints all elements of dlisted_t.
 *@h: The head of the dlistint_t list.
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length = 0;
		h = h->next;
	}

	return (length);
}
