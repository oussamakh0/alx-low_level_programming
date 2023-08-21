#include "main.h"
#include <stdio.h>

/**
 *print_array - print array elements
 *@a: the array
 *@n: number of elements
 *Return: none if success
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
	printf("\n");
}
