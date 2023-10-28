#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints all arguments it receives.
 * Description: All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: argument counter
 * @argv: arguments vector
 * Return: 0 on success.
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
