#include "main.h"
#include <unistd.h>
/**
 *more_numbers - check the code
 *Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
