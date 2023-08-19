include "main.h"
/**
 *print_triangle - check func
 *@size: how many # will be printed
 *Return: nothing on success
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		k = size;
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < k; j++)
				_putchar(' ');
			j = size - (j - 1);
			for (j; j > 0; j--)
				_putchar('#');
			_putchar('\n');
			k--;
		}
	}
	else
		_putchar('\n');
}
