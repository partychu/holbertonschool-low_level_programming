#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @i: interger to perform on
 * Return: ld
 */

int print_last_digit(int i)
{
	if (i >= 0 && i <= 9)
		i = i
	else
		i = i % 10;
	if (i < 0)
<<<<<<< HEAD
		i = i * -1;
=======
		{
			i = (i * -1);
		}
>>>>>>> 8815b449b9a5a0522cd943dc5d98d9c088eb8fc3
	_putchar(i);
	return (i);
}
