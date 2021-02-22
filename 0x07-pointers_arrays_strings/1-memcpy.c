#include "holberton.h"

/**
 * _memcpy - copies n bytes from one memory area to another
 * @dest: string to be copied to
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		dest[idx] = src[idx];
	return (dest);
}
