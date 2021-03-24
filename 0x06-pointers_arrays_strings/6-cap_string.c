#include "holberton.h"

/**
 * cap_string - capitalizes all words
 * @str: string to capitalize
 * Return: modified string
 */

char *cap_string(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		while (str[idx] >= 'a' && str[idx] <= 'z')
			if (str[idx - 1] == ' ' ||
					str[idx - 1] == '\n' || str[idx - 1] == '\t' ||
					str[idx - 1] == ',' || str[idx - 1] == ';' ||
					str[idx - 1] == '.' || str[idx - 1] == '!' ||
					str[idx - 1] == '?' || str[idx - 1] == '"' ||
					str[idx - 1] == '(' || str[idx - 1] == ')' ||
					str[idx - 1] == '{' || str[idx - 1] == '}' ||
					idx == 0)
			{
				str[idx] -= 32;
			}
			else
			{
				idx++;
			}
	}
	return (str);
}
