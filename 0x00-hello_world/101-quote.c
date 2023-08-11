#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
/**
 *main - prints a message without using puts and printf
 *Description -  program that prints exactly and that piece of art is useful" 
 *- Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 * Return - value is 0
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
