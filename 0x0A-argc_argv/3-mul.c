#include "holberton.h"

/**
 * main - multiplies 2 numbers
 * @argc: ac
 * @argv: av
 * Return: 0 on succes, 1 on error
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
