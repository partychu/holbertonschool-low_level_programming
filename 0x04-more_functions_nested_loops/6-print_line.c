#include "holberton.h"

/**
 * print_line - prints a straight line
 * @n: number of times _ is printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
