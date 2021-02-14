#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
