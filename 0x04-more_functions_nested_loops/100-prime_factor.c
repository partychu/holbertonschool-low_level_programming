#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
long big = 612852475143;
long f;
long pf;

	for (f = 2; f <= big; f++)
	{
		while (big % f == 0)
		{
			big = big / f
		if (f > pf)
			pf = f
		}
	}
	printf("%d", pf);
	return (0);
}
