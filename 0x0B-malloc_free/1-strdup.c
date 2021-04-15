#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *dup;
	int len;
	int idx;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (idx = 0; idx <= len; idx++)
	{
		dup[idx] = str[idx];
	}
	return (dup);
}
