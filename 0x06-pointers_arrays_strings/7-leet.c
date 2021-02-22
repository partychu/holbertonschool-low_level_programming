#include "holberton.h"

/**
 * *leet - converts to 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int idx, bsx;
	char base[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (bsx = 0; base[bsx] != '\0'; bsx++)
			if (s[idx] == base[bsx])
				s[idx] = encode[bsx];
	}
	return (s);
}
