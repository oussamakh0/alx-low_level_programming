#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - check the code
 *@n: starting point
 *Return: nothing on success
 */
void print_to_98(int n)
{
	if (n <= 98)
		ft_putchar_less_than(n);
	else if (n > 98)
		ft_putchar_great_than(n)
	_putchar('\n');
}

/**
 *ft_putchar_less_than - chech the func
 *@num: arg
 *Return: nothing on success
 */
void ft_putchar_less_than(int num)
{
	while (num <= 98)
	{
		printf("%d", num);
		if (num != 98)
			printf(", ");
		num++;
	}
}

/**
 *ft_putchar_great_than - check the func
 *@num: arg
 *Return: nothing
 */
void ft_putchar_great_than(int num)
{
	while (num >= 98)
	{
		printf("%d", num);
		if (num != 98)
			printf(", ");
		num--;
	}
}
