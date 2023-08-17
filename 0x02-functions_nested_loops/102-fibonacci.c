#include "main.h"
#include <stdio.h>

/**
 * main - check the func
 * Return: 0
 */

int main(void)
{
	int count;

	long int first, second;
	long int next;

	count = 3;
	first = 1;
	second = 2;
	next = first + second;
	printf("%lu, ", first);
	printf("%lu, ", second);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else
		{ 
			printf("%lu, ", next); 
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
