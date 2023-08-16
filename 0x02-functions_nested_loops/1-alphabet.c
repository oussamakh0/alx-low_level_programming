#include "main.h"
/**
 *main - prints the alphabet, in lowercase, followed by a new line
 *Return: 0 on success
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		_putchar(c++);
	}

}
