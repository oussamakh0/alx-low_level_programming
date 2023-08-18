#include "main.h"

/**
 *print_number - as the name suggests
 *Return: nothing
 */

void print_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
