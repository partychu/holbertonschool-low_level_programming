#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers 0-14
 * Return: void
 */


void more_numbers(void)
{
int i;
int c;

	c = 0
	while (c < 10)
	{
		for (i = 0, i < 15; i++)
		if (i > 9)
			{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			}
	_putchar(\n);
	c++;
	}
}
