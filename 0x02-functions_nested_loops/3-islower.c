#include "holberton.h"

/**
 * _islower - check for lowercase character.
 * @c: is a character to be check.
 *
 *Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
	int lowercase;

	if (c > 96 && c < 123)
	{
		lowercase = 1;
	}
	else
	{
		lowercase = 0;
	}
	return (lowercase);
}
