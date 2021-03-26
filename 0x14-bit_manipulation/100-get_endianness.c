#include "holberton.h"

/**
 * get_endianness - checks endianness
 * Return: 0 big endian, 1 little endian
 */
int get_endianness(void)
{
	unsigned int check = 1;

	return ((int) (((char *)&check)[0]));
}
