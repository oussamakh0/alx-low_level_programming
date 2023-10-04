#include <stdlib.h>

/**
 * _strdup -	function that returns a pointer to a newly allocated
 * 		space in memory, which contains a copy of the string
 * 		given as a parameter.
 *
 * Description: The _strdup() function returns a pointer to a new s
 * 		tring which is a duplicate of the string str. Memory
 * 		for the new string is obtained with malloc, and
 * 		can be freed with free.
 *
 * @str:	the string to be dupplicated.
 * 
 * Return: 	NULL if str = NULL, or a  pointer to the duplicated
 * 		string.
 * 		It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *dup_str;
	size_t str_len;

	dup_str = NULL;
	str_len = 0;
	if (str == NULL)
		return (dup_str);
	str_len = _strlen(str);
	dup_str = (char *)malloc(sizeof(char) * str_len);
	if (dup_str == NULL)
		return (dup_str);
	_strcpy(str, dup_str);
	return (dup_str);
}

/**
 * _strlen - counts string length
 * @s: the string's legth to be counted
 * Return: the length of s.
*/

size_t _strlen(char *s)
{
	size_t s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	return (s_len);
}

/**
 * _strcpy - copy s1 to s2
 * @s1: string to be coppied from
 * @s2: string to be copied into
 * Return: nothing
*/

void _strcpy(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
}
