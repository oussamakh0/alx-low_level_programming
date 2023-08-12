#include <stdio.h>
/**
 *main - Write a program that prints all single digit
 *numbers of base 10 starting from 0, followed by a new line.
 *Return: 0 on success
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
