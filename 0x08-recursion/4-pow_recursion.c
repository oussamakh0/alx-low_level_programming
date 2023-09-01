#include "main.h"

/**
 *_pow_recursion - a function that returns the value of
 *x raised to the power of y.
 *@x: will be raised to the y power
 *@y: the power
 *Return: the power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = 1;
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		result = x;
	else
		result = (x * _pow_recursion(x, (y - 1)));
	return (result);
}
