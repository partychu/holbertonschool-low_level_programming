#include "holberton.h"

/**
 * print_alphabet_x10- prints alphabet ten times
 * @alpha - a letter
 * @i - repeat count
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
