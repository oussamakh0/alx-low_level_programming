#include "main.h"
#include <stdio.h>
/**
 *print_times_table - print times table
 *@n: see the function
 *Return: nothing if success
 */
void print_times_table(int n)
{
	int f_n, s_n;

	if (n >= 0 && n <= 15)
	{
		for (f_n = 0; f_n <= n; f_n++)
		{
			s_n = 0;
			do {
				f_print_num(f_n, s_n, n);
			} while (++s_n <= n);
		}
	}
}

/**
 *f_print_num - check the function
 *@n1: first arg
 *@n2: second arg
 *@m: delimiter
 *Return: nothing on success
 */
void f_print_num(int n1, int n2, int m)
{
	printf("%d", (n1 * n2));
	if (n2 != m)
	{
		printf(", ");
		if ((n1 * (n2 + 1) < 10))
			printf("  ");
		else if (((n1 * (n2 + 1)) >= 10) && ((n1 * (n2 + 1)) <= 99))
			printf(" ");
	}
	else
		printf("\n");
}
