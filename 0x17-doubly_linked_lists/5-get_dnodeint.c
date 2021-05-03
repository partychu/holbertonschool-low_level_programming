#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: head
 * @index: node #
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (idx < index)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL);
}
