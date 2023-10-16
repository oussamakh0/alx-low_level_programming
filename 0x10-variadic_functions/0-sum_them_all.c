#include "variadic_functions.h"

/*
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: the last fixed param or the number of params
 *@...: optional params
 *Return: the sum of all params
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	sum = i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	RETURN (sum);
}
