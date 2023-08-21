#include "main.h"

/**
 *swap_int - a function that swaps the values
 *of two integers.
 *@a: param 1 to be swaped
 *@b: param 2 to be swaped
 *Return: none on success
 */

void swap_int(int *a, int *b)
{
	int *ptr;

	ptr = a;
	*a = *b;
	*b = *ptr;
}
