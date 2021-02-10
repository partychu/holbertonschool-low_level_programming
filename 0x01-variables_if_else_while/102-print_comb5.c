#include <stdio.h>

/**
 * main - prints a lot of numbers
 *
 * Return: 0
 */

int main(void)
{
	int alg1, alg2, i1, i2, j1, j2;

	for (alg1 = 0; alg1 <= 98; alg1++)
	{
		for (alg2 = alg1 + 1; alg2 <= 99; alg2++)
		{
			i1 = (alg1 / 10 + '0');
			i2 = (alg1 % 10 + '0');
			j1 = (alg2 / 10 + '0');
			j2 = (alg2 % 10 + '0');

			putchar(i1);
			putchar(i2);
			putchar(' ');
			putchar(j1);
			putchar(j2);
			if ((alg1 != 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
