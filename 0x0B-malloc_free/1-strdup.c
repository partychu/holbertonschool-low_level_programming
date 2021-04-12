#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str - string to be duplicated
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *dup;
	int size, copy;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] !=  '\0'; size++)
		;

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}

	for (copy = 0; copy < size; copy++)
		dup[copy] = str[copy];

	return (dup);
}
