#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
/**
 *main - prints a message without using puts and printf
 *Description -  program that prints exactly and that piece of art is useful"
 *@parameterx: an array of chars to be givven to be outputted by write
 *- Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 * Return - value is 1 on success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, str, 59);
	return (1);
}
