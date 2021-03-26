#include "holberton.h"

/**
 * print_binary - prints binary of a num
 * @n: number to be conv
 */

void print_binary(unsigned long int n)
{
	if ((n >> 1) != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
