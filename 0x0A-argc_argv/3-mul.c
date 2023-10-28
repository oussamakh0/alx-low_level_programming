#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success.
*/

int main(int argc, char **argv)
{
	int factor1;
       	int factor2;

	factor1 = 0;
	factor2 = 0;
	if (argc >= 3)
	{
		factor1 = atoi(argv[1]);
		factor2 = atoi(argv[2]);
		printf("%d\n", factor1 * factor2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
