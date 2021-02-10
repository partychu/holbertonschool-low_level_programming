#include "holberton.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: char
 * Return: 1 for yes 0 for no
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
