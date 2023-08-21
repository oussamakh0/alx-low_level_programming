#include "main.h"

/**
 *_strlen - counts strings charachters = length
 *@s: arg is the string to be counted
 *Return : the string length or 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);	
}
