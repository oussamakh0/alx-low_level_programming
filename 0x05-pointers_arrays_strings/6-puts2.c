#include "main.h"

/**
 *puts2 - prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string to be outputed
 *Return: none on success
 */

void puts2(char *str)
{
	int i;
	int len;

	len  = _strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
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
