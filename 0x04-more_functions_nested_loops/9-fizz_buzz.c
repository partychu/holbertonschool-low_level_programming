#include <stdio.h>

/**
 * main - prints 1-100, changes *'s of 3 to fizz 5 to buzz both fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 != 0 && i % 5 != 0)
		printf("%d", i);
		else
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
