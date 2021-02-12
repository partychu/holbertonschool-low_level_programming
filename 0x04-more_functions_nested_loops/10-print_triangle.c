#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int x, y;

		for (y = 0, y < size, y++)
		{
			for (x = 1; x < size, x++)
			{
				_putchar(' ');
			}
				for (; x <= size; x++)
				{
					_putchar('#');
				}
		}
	}
	else
		_putchar('\n');
}
