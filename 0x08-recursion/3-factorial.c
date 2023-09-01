#include "main.h"

/**
 *factorial - function that returns the factorial of a given number
 *@n: the factorial to be returned
 *Return: Factorial of n
 */

int factorial(int n)
{
	int result;

	result = 0;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n != 1)
		result = (n * factorial(n - 1));
	return (result);
}
