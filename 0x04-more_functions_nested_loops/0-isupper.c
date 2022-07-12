#include "holberton.h"

/**
 * _isupper - check for uppercase character.
 * @c: is a character to be check.
 *
 *Return: 1 if c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	int uppercase;

	if (c > 64 && c < 91)
	{
		uppercase = 1;
	}
	else
	{
		uppercase = 0;
	}
	return (uppercase);
}
