#include "main.h"
/**
 *main-
 *Description: create a fun that prints _putchar + its header file
 *Return: 0 on success
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	i = -1;
	while (str[++i] != '\0')
		func_putchar(str[i]);
	func_putchar('\n');
	return (0);
}
