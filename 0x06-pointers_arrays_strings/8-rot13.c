#include "holberton.h"

/**
 * rot13 - encodes a string in rot13
 * @str: str to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int idx, jdx;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWZYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (jdx = 0; alpha[jdx] != '\0'; jdx++)
			if (str[idx] == alpha[jdx])
			{
				str[idx] = rot13[jdx];
				break;
			}
	}
	return (str);
}

