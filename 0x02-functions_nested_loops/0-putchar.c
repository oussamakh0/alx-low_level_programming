#include "main.h"
/**
 *main- _putchar must be printed
 *Description: create a fun that prints _putchar  its header file
 *Return: 0 on success
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	i = -1;
	while (str[++i] != '\0')
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
