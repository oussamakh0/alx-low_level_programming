#include <stdio.h>
/**
 *main - Write a program that prints the alphabet
 *in lowercase, followed by a new line.
 *Return: 0 if success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
