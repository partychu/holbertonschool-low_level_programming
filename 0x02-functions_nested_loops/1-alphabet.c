#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void)
{
	char bet;

		for (bet = 97; bet <= 122; bet++)
		{
			_putchar(bet);
		}
	_putchar('\n');
}
