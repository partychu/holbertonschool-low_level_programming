#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers
 * @array: pointer to first element
 * @size: # of elements
 * @value: value to search for
 */

int linear_search(int *array, size_t size, int value)
{

    int i;
    int tmp;

    if (!array)
        return (-1);

    if (array != NULL)
    {
        for (i = 0; i < n; i++)
        {
            tmp = array[i];
            printf("Value checked array[%d] = [%d]\n", i, tmp);
            if (arr[i] == value)
                return (i);
        }
    }
    else
        return (-1);
}
