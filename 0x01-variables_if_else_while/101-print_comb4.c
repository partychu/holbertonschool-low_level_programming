#include <stdio.h>

/**
 * main - prints 00 - 99
 * Return: 0
 */

int main(void)
{

	int d1, d2, d3;

	for (d1 = '0'; d1 <= '7'; d1++)
	{
		for (d2 = '0'; d2 <= '8'; d2++)
		{
			for (d3 = '0'; d3 <= '9'; d3++)
			{
				if ((d1 < d2) && (d2 < d3))
				{
				putchar(d1);
				putchar(d2);
				putchar(d3);
					if (d1 != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
