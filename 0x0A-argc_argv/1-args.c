/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Description: Write a program that prints the number of arguments
 * passed into it. the program should print a number, followed by a new line
 * Return: 0 on success
*/

#include <stdio.h>
#include "main.h"

int main(__attribute__((unused)) int argc, char **argv)
{
	if (argc != 1)
	{
		printf("%d\n", argc);
	}
	else
		printf("%d\n", 0);
	return (0);
}
