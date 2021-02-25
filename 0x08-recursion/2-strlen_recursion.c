#include "holberton.h"

/**
 * _strlen_recursion - counts length of str
 * @s: string to count
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
