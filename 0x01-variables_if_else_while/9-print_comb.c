#include <stdio.h>
/**
 *main - Write a program that prints all
 *possible combinations of single-digit numbers
 *Return: 0 on success
 */
int main(void)
{
	int num;

	num = 0
	for (; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
