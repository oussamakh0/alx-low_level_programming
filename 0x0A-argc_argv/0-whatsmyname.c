/**
 *main - Write a program that prints its name, followed by a new line
 *@argc: for argument counts
 *@argv: for argument vector
 *Description: If you rename the program, it will print the new name,
 *without having to compile it again
 *You should not remove the path before the name of the program
 *Return: 0 on success
 */

#include <stdio.h>
#include "main.h"

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
