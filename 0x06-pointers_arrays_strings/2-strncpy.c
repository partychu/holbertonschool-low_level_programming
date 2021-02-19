#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: string being copied to
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	for (; idx < n; idx++)
	{
		dest[idx] = '\0';
	}
	return (dest);
}

