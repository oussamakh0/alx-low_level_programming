#include "main.h"

/**
 *print_numbers - as the name suggests
 *Return: void
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
