#include "holberton.h"

/**
 * _strncat - concatenates two strings with a byte limit on source
 * @dest: destination string
 * @src: string being concatenated
 * @n: number of bytes to link from src
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int idx, jdx;

	for (idx = 0; dest[idx] != '\0'; idx++)
		;
	for (jdx = 0; jdx < n; jdx++)
	{
		if (src[jdx] != '\0')
		{
			dest[idx] = src[jdx];
			idx++;
		}
		else if (src[jdx] == '\0')
			break;
	}
	return (dest);
}
