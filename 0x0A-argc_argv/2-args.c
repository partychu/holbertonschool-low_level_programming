#include "holberton.h"

/**
 * main - prints all arguments
 * @argc: ac
 * @argv: av
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
		printf("%s\n", argv[idx]);

	return (0);
}
