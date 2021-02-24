#include "holberton.h"

/**
 * _strspn - checks matching bytes in strings
 * @s: string to check
 * @accept: array for checking
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len, flag;

	for (i = 0, flag = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				i++;
				len++;
				flag++;
			}
		}
		if (flag == 0)
			return (len);
	}
	return (len);
}
