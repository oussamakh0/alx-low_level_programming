#include "main.h"

/**
 *puts_half -  a function that prints half of a string,
 *followed by a new line._check the function_
 *@str: its second half will be outputed
 *Return: nothing on success
 */

void puts_half(char *str)
{
	int len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		len /= 2;
		len--;
		_puts(str + len);
	}
	else
	{
		len = (len - 1) / 2;
		len--;
		_puts(str + len);
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

/**
 *_puts - prints string s to stdout
 *@s: arg to be outputed
 *Return: none on success
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');
}
