#include "main.h"

/**
 * ft_first - check the first prt and returns the rest
 * @str: the start of the string
 * @st: the end of the string
 * Return: the result of substraction
*/

int ft_first(char *str, char *st)
{
	int res;

	res = 0;
	if (&str[0] == &st[0])
		res = str[0];
	else
		res = str[0] - ft_first(str + 1, st);
	return (res);
}

/**
 * ft_second - return the rest of all characters
 * @ss: the strt of the string
 * @sss: the end of the string
 * Return: the rest of all chars
*/

int ft_second(char *ss, char *sss)
{
	int res;

	res = 0;
	if (&ss[0] == &sss[0])
		res = ss[0];
	else
		res = ss[0] - ft_second(ss - 1, sss);
	return (res);
}

/**
 * ft_len - calculate the length of the string
 * @s: the string
 * Return: the len of s
*/

int ft_len(char *s)
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

/**
 *is_palindrome - check if a s is a palindrome
 *@s: the string to be checked
 *Return: 1 if s is palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int res1;
	int res2;
	int len;

	if (*s == '\0')
		return (1);
	len = ft_len(s);
	res1 = ft_first(s, s + (len - 1) / 2);
	res2 = ft_second(s + (len - 1), s + (len / 2));
	return (res1 == res2);
}
