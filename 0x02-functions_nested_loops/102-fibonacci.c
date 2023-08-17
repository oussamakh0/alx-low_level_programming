#include <stdio.h>
/**
 * main - check the func
 * Return: 0
 */
int main(void)
{
	long int v1;
	long int v2;
	long int v3;
	long int count;


	v1 = 0;
	v2 = 1;
	v3 = v1 + v2;
	count = -1;
	while (++count < 50)
	{
		printf("%ld", v3);
		v1 = v2;
		v2 = v3;
		v3 = v1 + v2;
		if (count < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
