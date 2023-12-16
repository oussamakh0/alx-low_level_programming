#include <stdio.h>
/**
 *main - Write a program that prints all combinations of single digs
 *Return: 0 on success
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
