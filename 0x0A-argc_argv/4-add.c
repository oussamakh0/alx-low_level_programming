#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: the sum of two arguments
*/

int symb_check(char **strs, int n_a);

int main(int argc, char **argv)
{
	int i;
	int sum;

	i = sum = 0;
	if (argc <= 2)
	{
		printf("0\n");
		return (1);
	}
	if (symb_check(argv, argc))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
	}
}

/**
 * symb_check - check if any of the argument(numbers contain a symbole)
 * @strs: array of strings(shoul be numbers)
 * @n_a: number of arguments
 * Return: 1 if containing a symbole, 0 otherwise
*/

int symb_check(char **strs, int n_a)
{
	int i;
	int j;

	for (i = 1; i < n_a; i++)
	{
		for (j = 0; strs[i][j] != '\0'; j++)
		{
			if (strs[i][j] < '0' || strs[i][j] > '9')
				return (1);
		}
	}
	return (0);
}
