#include <stdlib.h>

/**
 * _strlen - counts string length
 * @str: the string's legth to be counted
 * Return: the length of str.
*/

size_t _strlen(char *str)
{
	size_t l;

	l = 0;
	while (*str)
		l++;
	return (l);
}

/**
 *_str_fill - fills the third param with first and second params
 *@f_s1: first string to be added to third param
 *@s_s2: second string
 *@s: param1 and param2 concatenated.
 * Return: concatenated strings the third pointer
*/

void _str_fill(char *f_s1, char *s_s2, char *s)
{
	while (*f_s1)
	{
		*s = *f_s1;
		s++;
		f_s1++;
	}
	while (*s_s2)
	{
		*s = *s_s2;
		s++;
		s_s2;
	}
}

/**
 *str_concat - a function that concatenates two strings.
 *@s1: str 1 to be joined with s2
 *@s2: str 2 to be joined with s1
 *return: new string containing copy from s1 and s2 or null
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t len;

	s = NULL;
	len = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len += _strlen(s1);
	len += _strlen(s2);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	_str_fill(s1, s2, s);
	return (s);
}
