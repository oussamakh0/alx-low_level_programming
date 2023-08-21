#include "main.h"

/**
 *rev_string - this function reverses a string
 *@s: string to be reversed
 *Return: nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	char rev_s[500];

	i = -1;
	len = _strlen(s);
	len--;
	while (++i <= len)
		rev_s[i] = s[len - i];
	rev_s[i] = '\0';
	for (i = 0; i <= len; i++)
		s[i] = rev_s[i];
	s[i] = '\0';
}

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
