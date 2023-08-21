#include "main.h"

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
