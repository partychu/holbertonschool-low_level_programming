#include "lists.h"

/**
 * insert_dnodeint_at_index - insterts a new node at index
 * @h: head
 * @idx: index
 * @n: int
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *pointer;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	pointer = *h;

	while (index != idx)
	{
		pointer = pointer->next;
		index++;
	}
	
	new->next = pointer->next;
	pointer->next = new;

	return (new);
}


