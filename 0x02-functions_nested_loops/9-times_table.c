#include "main.h"
/**
 *times_table - print times table
 *Return: nothing if success
 */
void func_print_num(int n1, int n2);

void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		n2 = 0;
		do
		{
			func_print_num(n1, n2);
		}
		while (++n2 <= 9);
	}
}

/**
 *func_print_num - check the function
 *@n1: first arg
 *@n2: second arg
 *Return: nothing on success
 */
void func_print_num(int n1, int n2)
{
	if ((n1 * n2) > 9)
	{
		_putchar(((n1 * n2) / 10) + 48);
		_putchar(((n1 * n2) % 10) + 48);
	}
	else
		_putchar((n1 * n2) + 48);
	if (n2 != 9)
	{
		_putchar(',');
		_putchar(' ');
		if ((n1 * ++n2) < 10)
			_putchar(' ');
	}
	else
		_putchar('\n');
}
