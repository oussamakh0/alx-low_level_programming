#include <stdio.h>
/**
 *main - Write a program that prints all the numbers
 *of base 16 in lowercase, followed by a new line.
 *Return: 0 on success
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
