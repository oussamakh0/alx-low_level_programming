#include "main.h"

/**
 *cap_string - capitalize all words in string
 *@s: strings words to be capitalized
 *Return: conveted s
 */

char *cap_string(char *s)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
