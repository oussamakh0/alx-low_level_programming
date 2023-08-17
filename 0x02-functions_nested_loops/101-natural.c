#include <stdio.h>
/**
 *main-  computes and prints the sum of
 *all the multiples of 3 or 5 below 1024
 *Return: zero on success
 */
int main(void)
{

	int n;
	int ret;

	ret = 0;
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			ret +=n;
		}
	}
	printf("%d\n", ret);
	return (0);
}
