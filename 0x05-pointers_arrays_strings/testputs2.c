#include "holberton.h"

/**
 * _puts - prints a string
 * @str: character value
 */

void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
