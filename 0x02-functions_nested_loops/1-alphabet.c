#include "holberton.h"

/**
 * print_alphabet - Print alphabet lowercase.
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
