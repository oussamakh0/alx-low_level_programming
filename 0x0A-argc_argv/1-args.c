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
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc);
	return (0);
}
