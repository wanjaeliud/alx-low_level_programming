#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Void input
 *
 *
 */
void times_table(void)
{
	int times;
	int num;
	int res;

	for (times = 0 ; times < 10 ; times++)
	{
		for (num = 0 ; num < 10 ; num++)
		{
			res = times * num;

			if (num == 0)
				_putchar('0');
			else
			{
				if (res < 10)
					_putchar(' ');
				else
					_putchar('0' + res / 10);

				_putchar('0' + res % 10);
			}

			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
