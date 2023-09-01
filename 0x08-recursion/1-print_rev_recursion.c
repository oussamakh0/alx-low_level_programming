#include "main.h"
/**
 *_print_rev_recursion - print parameter s in reverse
 *@s: to be reversed and printed
 *Return: nothing on succes
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
