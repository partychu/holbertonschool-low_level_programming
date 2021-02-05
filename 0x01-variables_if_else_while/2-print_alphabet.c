#include <stdio.h>

/**
 * main - This program will print the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char x;

	x = 'a';

	for (x; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
