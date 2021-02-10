#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: interger being checked
 * Return: 1 for +, 0 for 0 and -1 for -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
