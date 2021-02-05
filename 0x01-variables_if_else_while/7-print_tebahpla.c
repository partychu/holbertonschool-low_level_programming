#include <stdio.h>

/**
 * main - This program will print the alphabet in lowercase backwards
 * Return: 0
 */

int main(void)
{
		char x;

		for (x = 'z'; x >= 'a'; x--)
		{
			putchar(x);
		}
		putchar('\n');

	return (0);
}
