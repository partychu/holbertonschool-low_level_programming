#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int idx, tmp;

	n--;

	for (idx = 0; idx < n; idx++)
	{
		tmp = a[idx];
		a[idx] = a[n];
		a[n] = tmp;
		n--;
	}
}

