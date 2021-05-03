#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head
 * @n: int in list
 * Return: new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *pointer;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	pointer = *head;

	while (pointer->next != NULL)
		pointer = pointer->next;

	pointer->next = new;

	new->n = n;
	new->prev = pointer;
	new->next = NULL;

	return (new);
}
