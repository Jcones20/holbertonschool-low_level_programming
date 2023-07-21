#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *coup = head;
	int sum = 0;

	if (head)
	{
		while (coup != NULL)
		{
			sum += coup->n;
			coup = coup->next;
		}
	}

	return (sum);
}
