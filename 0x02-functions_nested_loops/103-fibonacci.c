#include <stdio.h>
/**
 *main - By considering the terms in the Fibonacci
 *sequence whose values do not exceed 4,000,000, write
 *a program that finds and prints the sum of the even-valued
 *terms, followed by a new line.
 *Return: 0 on success
 */

int main(void)
{
	int v1;
	int v2;
	int v3;
	int count;

	v1 = 0;
	v2 = 1;
	v3 = v1 + v2;
	count = 0;
	while (v3 <= 4000000)
	{
		if (v3 % 2 == 0)
			count += v3;
		v1 = v2;
		v2 = v3;
		v3 = v1 + v2;
	}
	printf("%d", count);
	printf("\n");
	return (0);
}
