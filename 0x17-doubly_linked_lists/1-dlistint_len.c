#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
