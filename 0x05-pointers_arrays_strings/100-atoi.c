#include "main.h"

/**
 *_atoi - converts a string into integers
 *@s: string to be converted
 *Return: integer, converted string
 */

int _atoi(char *s)
{
	int cvr_s;
	int sign;
	int i;

	cvr_s = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= 48 && s[i] <= 57)
			break;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		cvr_s = (cvr_s * 10) + (s[i] - 48);
		if (cvr_s * sign == -2147483648)
			return (cvr_s * sign);
		i++;
	}
	return (cvr_s * sign);
}
