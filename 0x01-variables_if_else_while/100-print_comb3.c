#include <stdio.h>

/**
 * main - prints 00 - 99
 * Return: 0
 */

int main(void)
{

	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y > x)
			{
				putchar('x');
				putchar('y');
			}
			if (x != '9' || y != '9')
			{
				putchar(',')
				putchar(' ')
			}
		}
	}
	putchar('\n');
	return (0);
}
