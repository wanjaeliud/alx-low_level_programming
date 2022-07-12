#include "holberton.h"

/**
 * _puts - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
