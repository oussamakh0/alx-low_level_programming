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

/**
 *_strlen - counts strings charachters = length
 *@s: arg is the string to be counted
 *Return: i the string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
