#include "holberton.h"

/**
 * more_numbers - Prints numbers 0 to 14, ten times.
 *
 *Return: Always void.
 */
void more_numbers(void)
{
	int times;
	int num;

	for (times = 1 ; times <= 10 ; times++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
