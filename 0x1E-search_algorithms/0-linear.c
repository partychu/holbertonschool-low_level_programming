#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers
 * @array: pointer to first element
 * @size: # of elements
 * @value: value to search for
 *
 * Return: item searched or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{

size_t i;

if (array != NULL)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
}
return (-1);
}
