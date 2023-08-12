#include <stdio.h>
/**
 *main - Write a program that prints the lowercase
 *alphabet in reverse, followed by a new line.
 *Return: 0 if success
 */
int main(void)
{
	int c;

	c = 122;
	while (c >= 97)
		putchar(c--);
	putchar('\n');
	return (0);
}
