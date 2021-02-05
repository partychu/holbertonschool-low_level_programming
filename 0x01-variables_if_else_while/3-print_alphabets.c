#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 * Return: 0
 */

int main(void)
{
		char x;
		char X;

		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		for (X = 'A'; X <= 'Z'; X++)
		{
			putchar(X);
		}
		putchar('\n');

		return (0);
}
