#include <stdio.h>
/**
 *main-
 *DESCRIPTION:
 *Return: 0 on success 
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	i = -1;
	while (str[++i] != '\0')
		putchar(str[i]);
	putchar('\n');
	return (0);
}
