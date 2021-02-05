#include <stdio.h>

/**
 * main - This program will print base10 digits
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
