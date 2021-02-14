#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int sq1, sq2;

	if (size > 0)
	{
		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < size; sq2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
