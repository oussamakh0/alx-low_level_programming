#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments
 * passed into it.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success.
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
