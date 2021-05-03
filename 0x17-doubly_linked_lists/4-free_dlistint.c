#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
