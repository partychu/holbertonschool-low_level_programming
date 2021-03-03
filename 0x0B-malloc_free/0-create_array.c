#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: size of array
 * @c: string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));


	if (size == 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
