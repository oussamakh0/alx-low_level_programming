#include "main.h"
/**
 *jack_bauer- print every minute of the day
 *Return: Nothing
 */
void jack_bauer(void)
{
	int hor, min;

	hor = min = 0;
	while (hor <= 23)
	{
		while (min <= 59)
		{
			_putchar((hor % 10) + 48);
			_putchar((hor / 10) + 48);
			_putchar(':');
			_putchar((min % 10) + 48);
			_putchar((min / 10) + 48);
			_putchar('\n');
			min++;
		}
		min = 0;
		hor++;
	}
}

