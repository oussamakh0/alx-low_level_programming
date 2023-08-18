#include "main.h"

/**
 *print_line - print n times
 *@n: the number of _ will be printed
 *Return: none
 */

void print_line(int n)
{
	int Chr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (Chr = 1; Chr <= n; ++Chr)
			_putchar('_');
		_putchar('\n');
	}
}
