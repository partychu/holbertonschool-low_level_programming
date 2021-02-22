#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search in
 * @c: character to find
 * Return: s[]
 */

char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
			return (s + idx);
	}
	return ('\0');
}

