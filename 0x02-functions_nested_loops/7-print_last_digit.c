#include "main.h"
/**
 *print_last_digit - print last digit of a number
 *@n: tested parameter
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	n %=10;
	if (n < 0)
		n *= -1;
	_putchar(n + 48);
	return (n);
}
