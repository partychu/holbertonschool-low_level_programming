#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers
 * @array: pointer to first element
 * @size: # of elements
 * @value: value to search for
 */

int linear_search(int *array, size_t size, int value)
{

    size_t i;
    int tmp;

    if (array != NULL)
    {
        for (i = 0; i < size; i++)
        {
            tmp = array[i];
            printf("Value checked array[%ld] = [%d]\n", i, tmp);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}
