#include "main.h"

/**
 *_strlen - counts strings charachters = length
 *@s: arg is the string to be counted
 *Return: i the string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
