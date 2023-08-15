#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>


void func_putchar(char c)
{
	putchar(c);
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
