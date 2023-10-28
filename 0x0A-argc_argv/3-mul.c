#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers.
 * Description: Your program should print the result of the multiplication,
 * followed by a new line. You can assume that the two numbers and result
 * of the multiplication can be stored in an integer. If the program
 * does not receive two arguments, your program should print Error,
 * followed by a new line, and return 1
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success.
*/

int main(int argc, char **argv)
{
	int factor1;
       	int factor2;
	char *strf1;
	char *strf2;

	strf1 = NULL;
	strf2 = NULL;
	factor1 = 1;
	factor2 = 1;
	if (argc >= 3)
	{
		strf1 = (char *)argv[1];
		strf2 = (char *)argv[2];
		factor1 = atoi(strf1);
		factor2 = atoi(strf2);
		printf("%d\n", factor1 * factor2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
