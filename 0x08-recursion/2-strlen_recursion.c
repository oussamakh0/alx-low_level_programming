#include "main.h"

/**
 *_strlen_recursion - count a string lenght
 *@s: its lenght to be counted
 *Return: the lenght of s
 */


int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*(s + len) == '\0')
		return (len);
	else if (*(s + len) != '\0')
	{
		len++;
		len += _strlen_recursion(s + len);
	}
	return (len);
}

