#include "main.h"
/**
 *print_number - as the name suggests
 *Return: nothing
 */
void print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
