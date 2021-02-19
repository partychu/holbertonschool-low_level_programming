#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if :, <0 if s1<s2, >0 if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int idx, jdx, count;

	for (idx = 0; s1[idx] != '\0'; idx++)
		;
	for (jdx = 0; s2[jdx] != '\0'; jdx++)
		;
	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		return (s1[count] - s2[count]);
	}
	if (idx > jdx)
		return (s1[jdx]);
	else if (idx < jdx)
		return (s2[idx] * -1);
	return (0);
}
