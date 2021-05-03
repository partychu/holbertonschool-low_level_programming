#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
