#include "holberton.h"

/**
 * puts2 - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	int len, i;
	char ch, *count;

	len = 0;
	count = str;
	while (*count != '\0')
	{
		count++;
		len++;
	}
	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
		{
			ch = *(str + i);
			_putchar(ch);
		}
	}
	_putchar(10);
}
