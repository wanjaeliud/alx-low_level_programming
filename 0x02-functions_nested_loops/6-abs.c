#include "holberton.h"

/**
 * _abs - Give the absolute any number.
 * @n: Number to evaluate.
 *
 * Return: 1 if c is letter, 0 otherwise.
 */
int _abs(int n)
{
	int num;

	if (n >= 0)
	{
		num = n;
	}
	else
	{
		num = -1 * n;
	}
	return (num);
}
