#include <stdio.h>
/**
 * main - check the func
 * Return: 0
 */
int main(void)
{
	unsigned int v1;
	unsigned int v2;
	unsigned int v3;
	unsigned int count;


	v1 = 0;
	v2 = 1;
	v3 = v1 + v2;
	count = 0;
	while (count++ < 98)
	{
		printf("%u", v3);
		v1 = v2;
		v2 = v3;
		v3 = v1 + v2;
		if (count < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
