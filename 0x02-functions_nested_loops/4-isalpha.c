#include "main.h"
/**
 *_isalpha- check if the arg is alpha
 *@c: character
 *Return: 1 if true or 0 
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
