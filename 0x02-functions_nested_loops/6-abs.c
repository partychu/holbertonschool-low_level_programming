#include "holberton.h"

/**
 * _abs - computes absolute value
 * @x: int being checked
 * Return: returns absolute value
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	return (x * -1);
}
