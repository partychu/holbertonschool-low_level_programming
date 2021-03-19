#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
