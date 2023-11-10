#include "variadic_functions.h"

/**
 * print_numbers: a function that prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
