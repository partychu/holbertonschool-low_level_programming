#include "lists.h"

/**
 * sum_dlistint - sums all of the data (n) in a dlistint_t list
 * @head: head
 * Return: sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
