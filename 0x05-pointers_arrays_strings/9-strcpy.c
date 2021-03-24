#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: copied string
 * @src: string to copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}
