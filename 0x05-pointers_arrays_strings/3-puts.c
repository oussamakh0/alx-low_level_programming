#include "main.h"

/**
 *_puts - function that prints a string,
 *followed by a new line, to stdout.
 *@str: arg to be outputed
 *Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	write(1, '\n', 1);
}
