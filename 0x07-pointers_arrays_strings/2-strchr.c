#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search in
 * @c: character to find
 * Return: s[]
 */

char *_strchr(char *s, char c)
{
	int len, idx;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (idx = 0; idx < len; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
	}
	return ('\0');
}

