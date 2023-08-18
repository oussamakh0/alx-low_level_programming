#include "main.h"

/**
 *print_square - as the name suggest
 *@size: size of the square
 *Return: none
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
