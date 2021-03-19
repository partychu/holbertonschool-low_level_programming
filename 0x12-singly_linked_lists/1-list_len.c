#include "lists.h"

/**
 * list_len - returns number of elements in a list_t list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
