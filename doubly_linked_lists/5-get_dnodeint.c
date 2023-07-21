#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *coup = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (coup != NULL)
		{
			if (iter_times == index)
				return (coup);

			coup = coup->next;
			iter_times++;
		}
	}

	return (NULL);
}
