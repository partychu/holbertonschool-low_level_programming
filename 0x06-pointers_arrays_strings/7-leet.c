#include "holberton.h"

/**
 * 1337encoder - converts to 1337
 * @s: string to be encoded
 */

char *leet(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == 65 || s[idx] == 97)
		{
			s[idx] = 52;
			else if (s[idx] == 51 || s[idx] == 101)
				s[idx] = 51;
			else if (s[idx] == 84 || s[idx] == 116)
				s[idx] = 55;
			else if (s[idx] == 79 || s[idx] == 108)
				s[idx] = 48;
			else if (s[idx] == 76 || s[idx] == 108)
				s[idx] = 49;
	return (s);
}
