#include "holberton.h"

/**
 * _strlen - Count the numbers of characters in a string.
 * @s: Variable string.
 *
 *Return: Always void.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
