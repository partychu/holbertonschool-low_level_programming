#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: returns index of value or -1 when fails
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, l = 0;
	size_t jump = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
		{
			l = i;
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		}
		if (array[i] >= value)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, i);
	for (i = l; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
return (-1);
}
