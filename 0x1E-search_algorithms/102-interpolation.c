#include "search_algos.h"

/**
 * interpolation_search - searched for a value in a sorted array of integers
 * @array: pointer to the first eleposent of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is locaed or -1 on failure
 */

int interpolation_search(int *array, size_t size, int value)
{

	size_t l, h, pos;

	if (array != NULL)
	{
		l = 0;
		h = size - 1;

		while (l <= h)
		{
			pos = l + (((double)(h - l) / (array[h] - array[l]))
					* (value - array[l]));

			if (pos < l || pos > h)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}
			if (value < array[pos])
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				h = pos - 1;
			}
			else if (value > array[pos])
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				l = pos + 1;
			}
			else
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				return (pos);
			}
		}
	}
	return (-1);
}
