#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str - string to be duplicated
 */

char *_strdup(char *str)
{
	char *dup;
	int size, copy;

	for (size = 0; str[size] !=  '\0'; size++)
		

	dup = malloc(sizeof(char) * size);

	for (copy = 0; copy < size; copy++)
		dup[copy] = str[copy];

	if (dup == NULL)
		return (NULL);
	
	return (dup);
}
