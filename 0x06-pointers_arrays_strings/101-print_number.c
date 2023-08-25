#include "main.h"


/**
 *print_number- prints an integer
 *@n: integer to be printed
 *Return: void
 */


void print_number(int n)
{
	int count = 0, pow = 1;
	unsigned int num = n;


	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	while (count > 1)
	{
		pow *= 10;
		count--;
	}
	while (pow >= 1)
	{
		_putchar(num / pow % 10 + '0');
		pow /= 10;
	}
}
