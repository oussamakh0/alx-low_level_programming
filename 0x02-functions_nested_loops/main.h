#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void func_putchar(char c)
{
	_putchar(c);
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		func_putchar(c++);
	}

}

#endif
