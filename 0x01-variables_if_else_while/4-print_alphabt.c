#include <stdio.h>

/**
 * main - print the alphabet no qe
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	if (x != 'q' && x != 'e')

	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
