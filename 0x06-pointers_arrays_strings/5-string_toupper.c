#include "main.h"

/**
 *string_toupper - convert lower case letters onto uppercase
 *@str: string to be uppercase
 *Return: converted string
 */

char *string_toupper(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
