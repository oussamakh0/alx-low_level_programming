#include "main.h"

/**
 *cap_string - capitalize all words
 *in string
 *@str: strings words to be capitalized
 *Return: str converted string
 */

char *cap_string(char *s)
{
	char *c_s(char *str);
	int c;

	c = 0;
	while (str[c] != '\0')
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[c] == ' ' || str[c] == '\t' || str[c] == '\n'
		    || str[c] == ',' || str[c] == ';' || str[c] == '.'
		    || str[c] == '.' || str[c] == '!' || str[c] == '?'
		    || str[c] == '"' || str[c] == '(' || str[c] == ')'
		    || str[c] == '{' || str[c] == '}')
		{
			if (str[c + 1] >= 97 && str[c + 1] <= 122)
				str[c + 1] = str[c+ 1] - 32;
		}
		c++;
	}
	return (str);
}
}
