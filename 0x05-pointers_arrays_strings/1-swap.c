#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: value to be put on b
 * @b: value to be put on a
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
