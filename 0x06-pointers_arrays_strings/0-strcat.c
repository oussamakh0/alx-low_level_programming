#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: arg to be appended
 *@src: arg to be appended to dest
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	i = -1;
	len = _strlen(dest);
	while (src[++i] != '\0')
		dest[len + i] = src[i];
	src[i] = '\0';
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
