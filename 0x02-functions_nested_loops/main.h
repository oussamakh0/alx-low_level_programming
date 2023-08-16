#ifndef main_h
#define main_h


#include <unistd.h>


int _putchar(char c)
{
	return (write(1, &c, 1));
}


void print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		_putchar(c++);
	}

}


#endif
