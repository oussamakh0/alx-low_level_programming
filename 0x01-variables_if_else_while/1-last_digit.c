#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - will assign a random number to the variable n each
 *time it is executed.
 *Complete the source code in order to print the last digi
 *t of the number storer
 *in the variable n.
 *Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, (int)(n % 10));
	else if ((n % 10) == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (int)(n % 10));
	return (0);
}
