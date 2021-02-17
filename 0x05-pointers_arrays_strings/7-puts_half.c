#include "holberton.h"

/**
 * puts_half - prints latter half of a string
 * @str: string to be altered
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	if ((i % 2) == 0)
	{
		for (n = i / 2; n < i; n++)
			_putchar(str[n]);
	}
	else if ((i % 2) != 0)
	{
		for (n = (i - 1) / 2; n < i; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
