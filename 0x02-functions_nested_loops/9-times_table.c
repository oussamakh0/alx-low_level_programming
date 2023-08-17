#include "main.h"
/**
 *times_table - print times table
 *Return: nothing if success
 */
void times_table(void)
{
	int f_n, s_n;

	for (f_n = 0; f_n <= 9; f_n++)
	{
		s_n = 0;
		do {
			func_print_num(f_n, s_n);
		} while (++s_n <= 9);
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
