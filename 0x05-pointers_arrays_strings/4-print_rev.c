#include "main.h"

/**
 *print_rev - print string s in reverse order
 *@s: the string
 *Return: nothing
 */

void print_rev(char *s)
{
	int len;

	len  = _strlen(s);
	if (len != 0)
	{
		while (--len >= 0)
			_putchar(s[len]);
	}
}
