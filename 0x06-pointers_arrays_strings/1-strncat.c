#include "main.h"

/**
 *_strncat - it concatenates n chars from src to dest
 *@dest: para to be appended to
 *@src: para to append from
 *@n: para number of characters to append from src to dest
 *Return: dest concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = _strlen(dest);
	i = -1;
	while (src[++i] != '\0' && i < n)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}

/**
 *_strlen - count string lenghth
 *@str: string to be counted
 *Return: len of str
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
