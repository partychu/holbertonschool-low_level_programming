#include "holberton.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 * @*: str to be modified
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int idx;

	for (idx = 0; s[idx]; idx++)
	{
		if (s[idx] >= 97 && s[idx] <= 122)
			s[idx] = s[idx] - 32;
	}
	return (s);
}
