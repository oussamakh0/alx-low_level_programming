#include "main.h"
/**
 *times_table - print times table
 *Return: nothing if success
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			_putchar((n1 * n2) + 48);
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((n1 * n2) > 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
