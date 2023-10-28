#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
	int	factor1;
       	int	factor2;
	if (argc >= 3)
	{
		factor1 = atoi(argv[1]);
		factor2 = atoi(argv[2]);
		printf("%d\n", factor1 * factor2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
