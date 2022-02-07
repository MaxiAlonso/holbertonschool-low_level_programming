#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 **/

void times_table(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (c < 10)
					_putchar(' ');
			}
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b == 9)
				_putchar('\n');
			b++;
		}
		a++;
	}
}
