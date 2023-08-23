#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: param first string
 *@s2: param second string
 *Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
