#include "main.h"

/**
 *is_prime_number - function that returns 1 if the input integer is
 *a prime number, otherwise return 0.
 *@n: to be checked if prime or not
 *Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if ((n % n == 0) && (n % 1 == 0))
		return (1);
}
