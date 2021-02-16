#include "holberton.h"

/**
 * _strlen - returns length of a string
 *
 * @s: string to return length of
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
