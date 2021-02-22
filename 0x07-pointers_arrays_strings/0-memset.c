#include "holberton.h"

/**
 * _memset - changes the first bytes of memory
 * @s: string to be altered
 * @b: value to substitute
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		s[idx] = b;

	return (s);
}
