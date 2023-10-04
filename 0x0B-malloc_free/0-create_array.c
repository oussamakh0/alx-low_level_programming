#include <stdlib.h>

/**
 *create_array - Write a function that creates an array of chars, and initializes
 *it with a specific char.
 *@size: the size of the array
 *@c: the character to initialize the array with
 *Return: a pointer to some data of type char, or a null on failure.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr_array;
	size_t i;

	ptr_array = NULL;
	i = 0;
	if (size == 0)
		return (ptr_array);
	ptr_array = (char *)malloc(sizeof(char) * size);
	if (ptr_array == NULL)
		return (ptr_array);
	while (i < size)
		ptr_array[i++] = c;
	return (ptr_array);
}
