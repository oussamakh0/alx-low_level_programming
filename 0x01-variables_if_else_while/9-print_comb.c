#include <stdio.h>
/**
 *main - Write a program that prints all
 *possible combinations of single-digit numbers
 *Return: 0 on success
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}
