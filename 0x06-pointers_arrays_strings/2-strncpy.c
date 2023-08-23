#include "main.h"

/**
 *_strncpy - copies n bytes from src to dest
 *@dest: param to copy onto
 *@src: param to copy from
 *@n: number of bytes to copy
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
