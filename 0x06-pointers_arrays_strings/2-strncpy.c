#include "holberton.h"

/**
 * strncpy - copies a string
 * @dest - string being copied to
 * @src - string to be copied
 * @n - bytes to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx

	for (idx = 0; i < n && src[idx] != '\0'; i++)
		dest[i] = src[i];
	for ( ; idx < n; idk++)
		dest[i] = '\0';
	return (dest);
}

