#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int conv, exp, res;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

	exp = 0;
	res = 0;
	idx -= 1;

	while (idx >= 0)
	{
		if (b[idx] == '0')
			conv = 0;
		else if (b[idx] == '1')
			conv = 1;
		
		res += conv << exp;
		exp++;
		idx--;
	}
	return (res);
}
