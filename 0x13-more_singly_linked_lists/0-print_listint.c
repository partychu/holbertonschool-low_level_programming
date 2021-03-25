#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list
 * @h: list head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
