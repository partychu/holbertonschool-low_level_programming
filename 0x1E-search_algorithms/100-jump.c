#include "search_algos.h"

/**
 *
 *
 *
 *
 *
 *
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i, l;
    size_t jump = sqrt(size);


    for (i = 0; i < size; i += jump)
    {
        if (array[i] == value)
        {
            printf("Value found between indexes [%ld] and [%ld]\n", l, i);
            return (i);
        }
        if (array[i] < value)
        {
            l = i;
            printf("Value checked array [%ld] = [%ld]\n", l, i);
        }
        if (array[i] > value)
            break;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", l, i);
    for (i = l; i < size; i++)
    {
        printf("Value checked array [%ld] = [%ld]\n", l, i);
        if (array[i] == value)
            return (i);
    }
return (-1);
}
