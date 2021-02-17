#include "holberton.h"

/**
 * _atoi - converts as tring to an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, strl = 0, num = 0, sign = 1, end = 0;

	while (s[strl] != '\0')
	{
		strl++;
	}
	while (i < strl && end == 0)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + sign * (s[i] - '0');
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				end = 0;
			else
				end = 1;
		}
		i++;
	}
	return (num);
}
