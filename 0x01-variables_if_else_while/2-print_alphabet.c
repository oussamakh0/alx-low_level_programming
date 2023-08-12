#include <stdio.h>
/**
 *main - Write a program that prints the alphabet
 *in lowercase, followed by a new line.i
 *using only putchar function
 *Retune: zero  0 on success
 */
int main(void)
{
	int c;

	c = 96;
	while (++c <= 122)
		putchar(c);
	putchar('\n');
	return (0);
}
