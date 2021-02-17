#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: rev string
 */

int string_length(char *s);
void rev_string(char *s)
{
	int strl, c;
	char *first, *last, tmp;

	strl = string_length(s);
	first = s;
	last = s;

	for (c = 0; c < strl - 1; c++)
		last++;

	for (c = 0; c < strl / 2; c++)
	{
		tmp = *last;
		*last = *first;
		*first = tmp;

		first++;
		last--;
	}
}

/**
 * string_length - returns length of string
 * @s: string to find length of
 * Return: c
 */

int string_length(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
