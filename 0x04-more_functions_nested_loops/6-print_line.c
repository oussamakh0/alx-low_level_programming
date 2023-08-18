#include "main.h"

/**
 *print_line - print n times
 *@n: the number of _ will be printed
 *Return: none
 */

void print_line(int n)
{
	while (n-- >= 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
