#include <stdio.h>
/**
 *main - Write a program that prints all combinations of single digs
 *Return: 0 on success
*/
int main(void)
{
	int c = -1;

	while (c++ < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
