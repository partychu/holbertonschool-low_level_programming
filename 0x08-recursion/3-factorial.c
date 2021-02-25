#include "holberton.h"

/**
 * factorial - finds the factorial
 * @n: number to find factorial of
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
		
	return (n * factorial(n - 1));
}
