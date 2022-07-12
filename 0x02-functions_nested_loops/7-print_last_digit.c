#include "holberton.h"

/**
 * print_last_digit - Give the last digit of any number.
 * @n: Number to evaluate.
 *
 * Return: Value of "last" digit.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n >= 0)
	{
		_putchar (last + '0');
	}
	else if (n < 0)
	{
		last = -1 * last;
		_putchar (last + '0');
	}
	return (last);
}
