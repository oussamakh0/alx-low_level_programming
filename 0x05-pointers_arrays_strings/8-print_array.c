#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (++i != n)
			printf(" ,");
	}
	_putchar('\n');
}
