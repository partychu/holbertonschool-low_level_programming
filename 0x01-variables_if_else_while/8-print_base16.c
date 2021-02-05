#include <stdio.h>

/**
 * main - prints all the numbers in base 16
 * Return: 0
 */

int main(void)
{
	int x;
	char X;

		for (x = '0'; x <= '9'; x++)
		{
			putchar(x);
		}
		for (X = 'a'; X <= 'f'; X++)
		{
			putchar(X);
		}
		putchar('\n');

	return (0);
}
