#include "main.h"

/**
 *_puts_recursion - function that prints a string
 *followed by a new line.
 *@s: the string to be outputed
 *Return: nothing on success
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	i++;
	else
		_puts_recursion(s + i);
}
