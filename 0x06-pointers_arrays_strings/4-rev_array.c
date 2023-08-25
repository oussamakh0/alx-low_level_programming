#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: none on success
 */

void reverse_array(int *a, int n)
{
	int *s_c, *e_c, c;
	int i;

	s_c = a;
	e_c = a;

	for (i = 0; i < n - 1; i++)
		e_c++;

	for (i = 0; i < n / 2; i++)
	{

		c = *e_c;
		*e_c = *s_c;
		*s_c = c;

		s_c++;
		e_c--;
	}
}
