#include <stdio.h>
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
	unsigned int factor1;
       	unsigned int factor2;
	const char *strf1;
	const char *strf2;

	strf1 = NULL;
	strf2 = NULL;
	factor1 = factor2 = 1;
	if (argc >= 3)
	{
		strf1 = (const char *)argv[1];
		strf2 = (const char *)argv[2];
		factor1 = _atoi(strf1);
		factor2 = _atoi(strf2);
		printf("%d\n", factor1 * factor2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


/**
 *_atoi - converts a string into integers
 *@s: string to be converted
 *Return: unsigned integer, converted string
 */

unsigned int _atoi(char *s)
{
	unsigned int cvr_s;
	int sign;
	int i;

	cvr_s = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= 48 && s[i] <= 57)
			break;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57 && s[i] != '\0')
	{
		cvr_s = (cvr_s * 10) + (s[i] - 48);
		i++;
	}
	return (cvr_s * sign);
}
