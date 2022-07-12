#include "holberton.h"

/**
 * _isalpha - check for alphabet character.
 * @c: alphabet  character.
 *
 * Return: 1 if c is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	int letter;

	if (c > 64 && c < 91)
	{
		letter = 1;
	}
	else if (c > 96 && c < 123)
	{
		letter = 1;
	}
	else
	{
		letter = 0;
	}
	return (letter);
}
