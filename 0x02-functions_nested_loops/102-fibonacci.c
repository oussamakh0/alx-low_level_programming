#include <stdio.h>
/**
 * main - check the func
 * Return: 0
 */
int main(void)
{
	int v1;
	int v2;
	int v3;
	int count;


	v1 = 0;
	v2 = 1;
	v3 = v1 + v2;
	count = -1;
	while (++count < 50)
	{
		printf("%d", v3);
		v1 = v2;
		v2 = v3;
		v3 = v1 + v2;
		if (count < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
