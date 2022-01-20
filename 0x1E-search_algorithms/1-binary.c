#include "search_algos.h"

/**
 * binary_search - searched for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is locaed or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
size_t l, m, h, i;

if (array != NULL)
{
l = 0;
h = size - 1;
m = 0;
while (l <= h)
{
printf("Searching in array: ");
for (i = l; i < h; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
m = (h + l) / 2;
if (array[m] < value)
l = m + 1;
else if (array[m] > value)
h = m - 1;
else
return (m);
}
}
return (-1);
}
