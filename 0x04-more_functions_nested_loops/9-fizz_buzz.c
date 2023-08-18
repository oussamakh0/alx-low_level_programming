#include <stdio.h>

/**
 *main - check the code, hint: Fizz fuzz
 *Return: none on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (!((i % 3 == 0) ||
			(i % 5 == 0)))
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
