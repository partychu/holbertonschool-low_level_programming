#include "lists.h"

/**
 * listint_len - returns number of elementes in listint_t list
 * @h: head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
