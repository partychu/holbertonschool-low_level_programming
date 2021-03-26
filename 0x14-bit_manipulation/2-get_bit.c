#include "holberton.h"

/**
 * get_bit - returns value of a bit at given index
 * @index: index
 * @n: bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
