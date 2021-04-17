#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates
 * @n: numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;
	char *strings;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{
		strings = va_arg(ap, char *);

		if (strings == NULL)
			printf("(nil)");
		else
			printf("%s", strings);

		if (idx < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
