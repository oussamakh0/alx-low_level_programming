#include "variadic_functions.h"

/**
 * print_strings - func prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * Return: 0 thing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str_holder;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str_holder = va_arg(ap, char *);
		if (str_holder == NULL)
			*str_holder = "(nil)";
		printf("%s", str_holder);
		if ((i + 1 < n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

