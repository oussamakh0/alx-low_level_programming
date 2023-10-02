/**
 * main - Write a program that prints the number of arguments passed into it
 * Description: Write a program that prints the number of arguments
 * passed into it. the program should print a number, followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc);
	return (0);
}
