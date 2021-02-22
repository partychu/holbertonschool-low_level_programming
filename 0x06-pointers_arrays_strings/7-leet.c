#include "holberton.h"

/**
 * 1337encoder - converts to 1337
 * @s: string to be encoded
 */

char *leet(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++){
			if (s[idx] == 65 || 97)
				s[idx] = 52;
			if (s[idx] == 51 || 101)
				s[idx] = 51;
			if (s[idx] == 84 || 116)
				s[idx] = 55;
	}
	return (s);
}
