#include "holberton.h"

/**
 * print_most_numbers - Prints numbers 0 to 9.Do not print 2 and 4.
 *
 *Return: Always void.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
