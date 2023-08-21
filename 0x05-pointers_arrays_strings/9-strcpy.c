#include "main.h"

/**
 *_strcpy- copies src to dest and return dest
 *@dest: a pointer to a string to copy into
 *@src: a pointer to a string to copy from
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
