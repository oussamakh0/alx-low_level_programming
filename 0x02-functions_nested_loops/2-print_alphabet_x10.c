#include "main.h"
/**
 *print_alphabet_x10 - print alphabet 10 times in lower case
 *Return: nothing  on success
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c++);
	}

}
