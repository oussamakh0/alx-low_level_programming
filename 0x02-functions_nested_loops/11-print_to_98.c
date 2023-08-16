#include "main.h"
/**
 *print_to_98- print all real numbers btw n - 98
 *@n: to be tested
 *Return: nothing on success
 */
void print_to_98(void n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf ("%d, ", n--);
			printf("%d\n", n);
		}
	}
	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d\n", n);
	}
}
