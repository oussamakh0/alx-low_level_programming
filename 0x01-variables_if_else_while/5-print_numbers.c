#include <stdio.h>
/**
 *main - Write a program that prints all single digit
 *numbers of base 10 starting from 0, followed by a new line
 *Return:  zero 0 on success
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
		printf("%d", i++);
	printf("\n");
	return (0);
}
