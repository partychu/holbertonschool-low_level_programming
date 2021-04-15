#include "holberton.h"

/**
 * str_concat - concatenates two strings and allocates memory
 * @s1: destination
 * @s2: source
 * Return: pointer to new str, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len, idx;
	char *catstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx] != '\0'; idx++)
		;
	len = idx;
	for (idx = 0; s2[idx] != '\0'; idx++)
		;
	len += idx;

	catstr = malloc(sizeof(char *) * len);

	if (catstr == NULL)
		return (NULL);

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		catstr[idx] = s1[idx];
	}
	len = idx;
	for (idx = 0; s2[idx] != '\0'; idx++)
	{
		catstr[len] = s2[idx];
		len++;
	}
	catstr[len] = '\0';
	return (catstr);
}
