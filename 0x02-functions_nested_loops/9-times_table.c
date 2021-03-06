#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int num, mul;
	int result;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			result = mul * num;

			if ( mul == 0)
				_putchar('0');
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			if (mul < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
