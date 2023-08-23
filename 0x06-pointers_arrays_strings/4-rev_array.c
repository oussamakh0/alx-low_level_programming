#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: none on success
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	n--;
	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
