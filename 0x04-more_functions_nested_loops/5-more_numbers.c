#include "main.h"
#include <unistd.h>
/**
 *more_numbers - check the code
 *Return: void
 */

void more_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	c = '0';
	while (c <= 52)
	{
		_putchar(49);
		_putchar(c);
		c++;
	}
	write(1, '\n', 1)
}
