#include "holberton.h"

/**
 * print_sign - check for the sign of a number.
 * @n: Number to evaluate.
 *
 * Return: 1 if c is letter, 0 otherwise.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		if (n > 0)
		{
			_putchar ('+');
			return (1);
		}
		else
		{
			_putchar ('-');
			return (-1);
		}
	}
}
