#include "holberton.h"

/**
 * _islower - checks a char is lower case
 * @c: char
 * Return: returns
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
