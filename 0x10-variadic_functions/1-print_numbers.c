#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates
 * @n: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(ap, int));

		if (idx < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
