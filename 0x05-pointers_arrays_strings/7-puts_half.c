#include "holberton.h"

/**
 * puts_half - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < len ; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (len - (len - 1) / 2) ; i < len ; i++)
		{
			_putchar (*(str + i));
		}
	}
	_putchar(10);
}
